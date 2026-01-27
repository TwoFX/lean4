/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Markus Himmel
-/
module

prelude
public import Init.Data.String.Basic
import Init.Data.String.Grind
import Init.Data.String.Lemmas.Basic

public section

namespace String

@[simp]
theorem Slice.Pos.next_le_iff_lt {s : Slice} {p q : s.Pos} {h} : p.next h ≤ q ↔ p < q :=
  ⟨fun h => Std.lt_of_lt_of_le lt_next h, next_le_of_lt⟩

@[simp]
theorem Pos.next_le_iff_lt {s : String} {p q : s.Pos} {h} : p.next h ≤ q ↔ p < q := by
  rw [next, Pos.ofToSlice_le_iff, ← Pos.toSlice_lt_toSlice_iff]
  exact Slice.Pos.next_le_iff_lt

@[simp]
theorem Slice.Pos.le_startPos {s : Slice} (p : s.Pos) : p ≤ s.startPos ↔ p = s.startPos :=
  ⟨fun h => Std.le_antisymm h (startPos_le _), by simp +contextual⟩

@[simp]
theorem Slice.Pos.endPos_le {s : Slice} (p : s.Pos) : s.endPos ≤ p ↔ p = s.endPos :=
  ⟨fun h => Std.le_antisymm (le_endPos _) h, by simp +contextual⟩

@[simp]
theorem Pos.le_startPos {s : String} (p : s.Pos) : p ≤ s.startPos ↔ p = s.startPos :=
  ⟨fun h => Std.le_antisymm h (startPos_le _), by simp +contextual⟩

@[simp]
theorem Pos.endPos_le {s : String} (p : s.Pos) : s.endPos ≤ p ↔ p = s.endPos :=
  ⟨fun h => Std.le_antisymm (le_endPos _) h, by simp +contextual⟩

end String
