/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Markus Himmel
-/
module

prelude
public import Init.Data.String.Slice
import all Init.Data.String.Pattern.Pred
import all Init.Data.String.Positions
import Init.Data.Iterators.Lemmas.Basic
import Init.Data.Iterators.Lemmas.Consumers.Collect
import Init.Data.Iterators.Lemmas.Combinators.FilterMap

namespace List

-- From Batteries

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

end List

namespace String.Slice

theorem PosIterator.step_eq_if
    {i : Std.Iter (α := PosIterator s) { p : s.Pos // p ≠ s.endPos }} :
    i.step.val = if h : i.internalState.currPos = s.endPos then
      .done
    else
      .yield ⟨⟨i.internalState.currPos.next h⟩⟩ ⟨i.internalState.currPos, h⟩ := by
  simp [Std.Iter.step, Std.IterM.step, Std.Iterator.step]
  split <;> simp

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

class LawfulForwardPattern {ρ : Type} (pat : ρ) [ForwardPattern pat] : Prop where
  isSome_dropPrefix? (s : Slice) : (s.dropPrefix? pat).isSome = s.startsWith pat

-- instance

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
    · simp
    · simp

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

end Pattern

theorem toStringList_split {s : Slice} {p : Char → Bool} :
    (s.split p).toStringList = (s.copy.toList.splitOnP p).map String.ofList := sorry

end String.Slice
