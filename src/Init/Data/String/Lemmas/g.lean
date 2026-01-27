/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Markus Himmel
-/
module

prelude
public import Init.Data.String.Slice
import all Init.Data.String.Slice
import all Init.Data.String.Pattern.Basic
import all Init.Data.String.Pattern.Pred
import all Init.Data.String.Positions
import Init.Data.Iterators.Lemmas.Basic
import Init.Data.Iterators.Lemmas.Consumers.Collect
import Init.Data.Iterators.Lemmas.Combinators.FilterMap
import Init.Data.String.Lemmas.Order
import Init.Data.String.Lemmas.Basic
import Init.Data.String.Grind
import Init.Grind

namespace List

section FromBatteries

/--
Split a list at every element satisfying a predicate. The separators are not in the result.
```
[1, 1, 2, 3, 2, 4, 4].splitOnP (· == 2) = [[1, 1], [3], [4, 4]]
```
-/
def splitOnP (P : α → Bool) (l : List α) : List (List α) := go l [] where
  /-- Auxiliary for `splitOnP`: `splitOnP.go xs acc = res'`
  where `res'` is obtained from `splitOnP P xs` by prepending `acc.reverse` to the first element. -/
  go : List α → List α → List (List α)
  | [], acc => [acc.reverse]
  | a :: t, acc => if P a then acc.reverse :: go t [] else go t (a::acc)

/-- `IsChain R l` means that `R` holds between adjacent elements of `l`.
```
IsChain R [a, b, c, d] ↔ R a b ∧ R b c ∧ R c d
``` -/
inductive IsChain (R : α → α → Prop) : List α → Prop where
  /-- A list of length 0 is a chain. -/
  | nil : IsChain R []
  /-- A list of length 1 is a chain. -/
  | singleton (a : α) : IsChain R [a]
  /-- If `a` relates to `b` and `b::l` is a chain, then `a :: b :: l` is also a chain. -/
  | cons_cons (hr : R a b) (h : IsChain R (b :: l)) : IsChain R (a :: b :: l)

end FromBatteries

section FromMathlib

theorem isChain_map_of_isChain {S : β → β → Prop} (f : α → β) (H : ∀ a b : α, R a b → S (f a) (f b))
    {l : List α} (p : IsChain R l) : IsChain S (map f l) := sorry

end FromMathlib

def last : (l : List α) → (hl : l ≠ []) → α
  | a :: [], h => a
  | a :: b :: bs, h => (b :: bs).last (by simp)

end List

namespace String.Slice

theorem PosIterator.step_eq_if
    {i : Std.Iter (α := PosIterator s) { p : s.Pos // p ≠ s.endPos }} :
    i.step.val = if h : i.internalState.currPos = s.endPos then
      .done
    else
      .yield ⟨⟨i.internalState.currPos.next h⟩⟩ ⟨i.internalState.currPos, h⟩ := by
  simp [Std.Iter.step, Std.IterM.step, Std.Iterator.step]
  split <;> simp [Std.IterM.toIter_mk']

theorem PosIterator.toList_endPos {s : Slice} :
    (Std.Iter.mk (PosIterator.mk s.endPos)).toList = [] := by
  simp [Std.Iter.toList_eq_match_step, PosIterator.step_eq_if]

theorem PosIterator.toList_eq_cons {s : Slice}
    {i : Std.Iter (α := PosIterator s) { p : s.Pos // p ≠ s.endPos } }
    (h : i.internalState.currPos ≠ s.endPos) :
    i.toList = ⟨i.internalState.currPos, h⟩ ::
      (Std.Iter.mk (PosIterator.mk (i.internalState.currPos.next h))).toList := by
  rw [Std.Iter.toList_eq_match_step]
  simp [PosIterator.step_eq_if, h]

namespace Pattern

namespace SearchStep

def startPos {s : Slice} (st : SearchStep s) : s.Pos :=
  match st with
  | .rejected startPos _ => startPos
  | .matched startPos _ => startPos

@[simp]
theorem startPos_rejected {s : Slice} {p q : s.Pos} : (SearchStep.rejected p q).startPos = p := rfl

@[simp]
theorem startPos_matched {s : Slice} {p q : s.Pos} : (SearchStep.matched p q).startPos = p := rfl

def endPos {s : Slice} (st : SearchStep s) : s.Pos :=
  match st with
  | .rejected _ endPos => endPos
  | .matched _ endPos => endPos

@[simp]
theorem endPos_rejected {s : Slice} {p q : s.Pos} : (SearchStep.rejected p q).endPos = q := rfl

@[simp]
theorem endPos_matched {s : Slice} {p q : s.Pos} : (SearchStep.matched p q).endPos = q := rfl

end SearchStep

structure IsMatchList (s : Slice) (l : List (SearchStep s)) : Prop where
  exists_le_and_lt : ∀ p : s.Pos, p ≠ s.endPos → ∃ st ∈ l, st.startPos ≤ p ∧ p < st.endPos
  lt : ∀ st ∈ l, st.startPos < st.endPos
  isChain : l.IsChain (fun l r => l.endPos = r.startPos)

class LawfulToForwardSearcher {ρ : Type} {σ : Slice → Type} (pat : ρ) [ToForwardSearcher pat σ]
    [∀ s, Std.Iterator (σ s) Id (SearchStep s)] [∀ s, Std.Iterators.Finite (σ s) Id] where
  isMatchList (s : Slice) : IsMatchList s (ToForwardSearcher.toSearcher pat s).toList

class LawfulForwardPattern {ρ : Type} (pat : ρ) [ForwardPattern pat] : Prop where
  isSome_dropPrefix? (s : Slice) : (ForwardPattern.dropPrefix? pat s).isSome = ForwardPattern.startsWith pat s
  dropPrefix?_ne_startPos (s : Slice) (p : s.Pos) : ForwardPattern.dropPrefix? pat s = some p → p ≠ s.startPos

theorem ForwardPattern.startsWith_defaultImplementation {ρ : Type} {σ : Slice → Type}
    [∀ s, Std.Iterator (σ s) Id (SearchStep s)] {pat : ρ} [ToForwardSearcher pat σ]
    [∀ s, Std.IteratorLoop (σ s) Id Id] (s : Slice) :
    letI := ForwardPattern.defaultImplementation (pat := pat)
    ForwardPattern.startsWith pat s = ForwardPattern.defaultStartsWith pat s := rfl

theorem ForwardPattern.dropPrefix?_defaultImplementation {ρ : Type} {σ : Slice → Type}
    [∀ s, Std.Iterator (σ s) Id (SearchStep s)] {pat : ρ} [ToForwardSearcher pat σ]
    [∀ s, Std.IteratorLoop (σ s) Id Id] (s : Slice) :
    letI := ForwardPattern.defaultImplementation (pat := pat)
    ForwardPattern.dropPrefix? pat s = ForwardPattern.defaultDropPrefix? pat s := rfl

theorem LawfulForwardPattern.defaultImplementation {ρ : Type} {σ : Slice → Type}
    [∀ s, Std.Iterator (σ s) Id (SearchStep s)] {pat : ρ} [ToForwardSearcher pat σ]
    [∀ s, Std.Iterators.Finite (σ s) Id] [LawfulToForwardSearcher pat]
    [∀ s, Std.IteratorLoop (σ s) Id Id] :
    letI : ForwardPattern pat := ForwardPattern.defaultImplementation (pat := pat)
    LawfulForwardPattern pat := by
  letI : ForwardPattern pat := ForwardPattern.defaultImplementation (pat := pat)
  refine ⟨fun s => ?_, fun s p => ?_⟩
  · rw [ForwardPattern.dropPrefix?_defaultImplementation,
      ForwardPattern.startsWith_defaultImplementation,
      ForwardPattern.defaultStartsWith, ForwardPattern.defaultDropPrefix?]
    split <;> simp
  · simp
    rw [ForwardPattern.dropPrefix?_defaultImplementation, ForwardPattern.defaultDropPrefix?]
    

    sorry

instance {pat : Char → Bool} : LawfulForwardPattern pat := .defaultImplementation

-- def stupidSplit {ρ : Type} [ForwardPattern pat] (pat : ρ) (s : Slice) : List (SearchStep s) :=
--   go s.startPos
-- where
--   go (pos : s.Pos)

theorem ForwardCharPredSearcher.step_eq_if
    {i : Std.Iter (α := ForwardCharPredSearcher p s) (SearchStep s)} :
    i.step.val = if h₁ : i.internalState.currPos = s.endPos then
      .done
    else
      let nextPos := i.internalState.currPos.next h₁
      let nextIt := ⟨⟨nextPos⟩⟩
      if p <| i.internalState.currPos.get h₁ then
        .yield nextIt (.matched i.internalState.currPos nextPos)
      else
        .yield nextIt (.rejected i.internalState.currPos nextPos) := by
  simp [Std.Iter.step, Std.IterM.step, Std.Iterator.step]
  split
  · simp
  · split
    · simp [Std.IterM.toIter_mk']
    · simp [Std.IterM.toIter_mk']

theorem bar {p : Char → Bool} {s : Slice} {pos : s.Pos} :
    (Std.Iter.mk (ForwardCharPredSearcher.mk (p := p) pos)).toList =
    ((Std.Iter.mk (PosIterator.mk pos)).toList.map (fun pos =>
      if p (pos.1.get pos.2) then
        .matched pos.1 (pos.1.next pos.2)
      else
        .rejected pos.1 (pos.1.next pos.2))) := by
  induction pos using WellFounded.induction Slice.Pos.wellFounded_gt with
  | h pos ih =>
    rw [Std.Iter.toList_eq_match_step, ForwardCharPredSearcher.step_eq_if]
    by_cases h₁ : pos = s.endPos
    · simp [h₁, PosIterator.toList_endPos]
    · simp [h₁]
      by_cases h₂ : p (pos.get h₁)
      · simp [h₂]
        rw [PosIterator.toList_eq_cons]
        · simp [h₂]
          rw [ih _ (by simp)]
      · simp [h₂]
        rw [PosIterator.toList_eq_cons]
        · simp [h₂]
          rw [ih _ (by simp)]

theorem ForwardCharPredSearcher.toList_iter {p : Char → Bool} {s : Slice} :
    (ForwardCharPredSearcher.iter p s).toList =
      (s.positions.toList.map (fun pos =>
        if p (pos.1.get pos.2) then
          .matched pos.1 (pos.1.next pos.2)
        else
          .rejected pos.1 (pos.1.next pos.2))) := by
  rw [ForwardCharPredSearcher.iter, bar, Slice.positions]

theorem ForwardCharPredSearcher.toList_toSearcher {p : Char → Bool} {s : Slice} :
    (ToForwardSearcher.toSearcher p s).toList =
      (s.positions.toList.map (fun pos =>
        if p (pos.1.get pos.2) then
          .matched pos.1 (pos.1.next pos.2)
        else
          .rejected pos.1 (pos.1.next pos.2))) :=
  toList_iter

def positionsFrom {s : Slice} (p : s.Pos) : List { pos // pos ≠ s.endPos } :=
  if h : p = s.endPos then [] else ⟨p, h⟩ :: positionsFrom (p.next h)
termination_by p

@[simp]
theorem positionsFrom_endPos {s : Slice} : positionsFrom s.endPos = [] := by
  simp [positionsFrom]

theorem positionsFrom_eq_cons {s : Slice} {p : s.Pos} (h : p ≠ s.endPos) :
    positionsFrom p = ⟨p, h⟩ :: positionsFrom (p.next h) := by
  rw [positionsFrom]
  simp [h]

theorem mem_positionsFrom {s : Slice} {p q : s.Pos} (h : q ≠ s.endPos) :
    ⟨q, h⟩ ∈ positionsFrom p ↔ p ≤ q := by
  induction p using WellFounded.induction Slice.Pos.wellFounded_gt with | h p ih
  by_cases h' : p = s.endPos
  · simp [*]
  · rw [positionsFrom_eq_cons h']
    simp only [ne_eq, List.mem_cons, Subtype.mk.injEq, ih (p.next h') (by simp)]
    rw [Slice.Pos.next_le_iff_lt]
    grind

theorem PosIterator.step_eq_if {s : Slice} (p : s.Pos) :
    (Std.Iter.mk (PosIterator.mk p)).step.val =
      if h : p = s.endPos then
        .done
      else
        .yield ⟨⟨p.next h⟩⟩ ⟨p, h⟩ := by
  simp [Std.Iter.step, Std.IterM.step, Std.Iterator.step]
  split
  · simp
  · simp [Std.IterM.toIter_mk']

theorem PosIterator.toList_eq {s : Slice} (p : s.Pos) :
    (Std.Iter.mk (PosIterator.mk p)).toList = positionsFrom p := by
  induction p using WellFounded.induction Slice.Pos.wellFounded_gt with | h pos ih
  rw [Std.Iter.toList_eq_match_step, PosIterator.step_eq_if]
  by_cases h : pos = s.endPos
  · simp [h]
  · simp [h]
    rw [ih _ (by simp), positionsFrom_eq_cons h]

theorem toList_positions {s : Slice} : s.positions.toList = positionsFrom s.startPos := by
  rw [positions, PosIterator.toList_eq]

theorem isChain_positionsFrom {s : Slice} {p : s.Pos} :
    List.IsChain (fun p q => q.1 = p.1.next p.2) (positionsFrom p) := by
  induction p using WellFounded.induction Slice.Pos.wellFounded_gt with | h p ih
  by_cases h : p = s.endPos
  · simp [h, List.IsChain.nil]
  · rw [positionsFrom_eq_cons h]
    by_cases h' : p.next h = s.endPos
    · simp [h', List.IsChain.singleton]
    · rw [positionsFrom_eq_cons h']
      apply List.IsChain.cons_cons (by simp)
      rw [← positionsFrom_eq_cons]
      apply ih _ (by simp)

instance {p : Char → Bool} : LawfulToForwardSearcher p where
  isMatchList s := by
    rw [ForwardCharPredSearcher.toList_toSearcher]
    simp [toList_positions]
    refine ⟨?_, fun st => ?_, ?_⟩
    · intro q hq
      simp only [List.mem_map, Subtype.exists, mem_positionsFrom, Pos.startPos_le, true_and]
      refine ⟨if p (q.get hq) then SearchStep.matched q (q.next hq)
        else SearchStep.rejected q (q.next hq), ⟨q, hq, by simp⟩, ?_⟩
      split <;> simp
    · simp [mem_positionsFrom]
      intro p hp
      split <;> rintro rfl <;> simp
    · apply List.isChain_map_of_isChain _ _ isChain_positionsFrom
      rintro ⟨a, ha⟩ ⟨b, hb⟩ rfl
      simp only
      split <;> split <;> simp

end Pattern

theorem toStringList_split {s : Slice} {p : Char → Bool} :
    (s.split p).toStringList = (s.copy.toList.splitOnP p).map String.ofList := sorry

end String.Slice
