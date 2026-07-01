/-!
Tests that `debug.terminalTacticsAsSorry` replaces the terminal tactics `omega`, `grind`, and
`simp +arith` (any `simp`/`simp_all` invocation with the `arith` option set) with `sorry`, while
leaving other tactics such as plain `simp` untouched.
-/

set_option debug.terminalTacticsAsSorry true

example (_ : x > 0) : False := by
  omega

example (_ : x > 0) : False := by
  grind

example (p : Prop) (x : Nat) : p := by
  simp +arith

example (p : Prop) (x : Nat) : p := by
  simp_all +arith

-- Plain `simp` (without `+arith`) is unaffected.
example (p : Prop) (x : Nat) : p := by
  fail_if_success simp
  sorry

set_option debug.terminalTacticsAsSorry false

example (_ : x > 0) : False := by
  fail_if_success omega
  sorry

example (_ : x > 0) : False := by
  fail_if_success grind
  sorry

example (p : Prop) (x : Nat) : p := by
  fail_if_success simp +arith
  sorry
