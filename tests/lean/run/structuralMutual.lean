mutual
inductive A
  | self : A → A
  | other : B → A
  | empty
inductive B
  | self : B → B
  | other : A → B
  | empty
end

mutual
def A.size : A → Nat
  | .self a => a.size + 1
  | .other b => b.size + 1
  | .empty => 0
termination_by structurally x => x
def B.size : B → Nat
  | .self b => b.size + 1
  | .other a => a.size + 1
  | .empty => 0
termination_by structurally x => x
end

mutual
def A.subs : (a : A) → (Fin a.size → A ⊕ B)
  | .self a => Fin.lastCases (.inl a) (a.subs)
  | .other b => Fin.lastCases (.inr b) (b.subs)
  | .empty => Fin.elim0
termination_by structurally x => x
def B.subs : (b : B) → (Fin b.size → A ⊕ B)
  | .self b => Fin.lastCases (.inr b) (b.subs)
  | .other a => Fin.lastCases (.inl a) (a.subs)
  | .empty => Fin.elim0
termination_by structurally x => x
end

theorem A_size_eq1 (a : A) : (A.self a).size = a.size + 1 := rfl
theorem A_size_eq2 (b : B) : (A.other b).size = b.size + 1 := rfl
theorem A_size_eq3 : A.empty.size = 0  := rfl
theorem B_size_eq1 (b : B) : (B.self b).size = b.size + 1 := rfl
theorem B_size_eq2 (a : A) : (B.other a).size = a.size + 1 := rfl
theorem B_size_eq3 : B.empty.size = 0  := rfl

/-- info: A.size.eq_1 (a : A) : a.self.size = a.size + 1 -/
#guard_msgs in
#check A.size.eq_1

/-- info: A.size.eq_2 (b : B) : (A.other b).size = b.size + 1 -/
#guard_msgs in
#check A.size.eq_2

/-- info: A.size.eq_3 : A.empty.size = 0 -/
#guard_msgs in
#check A.size.eq_3

/-- info: B.size.eq_1 (b : B) : b.self.size = b.size + 1 -/
#guard_msgs in
#check B.size.eq_1

/-- info: B.size.eq_2 (a : A) : (B.other a).size = a.size + 1 -/
#guard_msgs in
#check B.size.eq_2

/-- info: B.size.eq_3 : B.empty.size = 0 -/
#guard_msgs in
#check B.size.eq_3

-- TODO:
-- #check A.size.induct

-- Test smart unfolding

/--
info: a : A
h : (B.other a).size = 1
⊢ a.size = 0
-/
#guard_msgs in
theorem ex1 (a : A) (h : (A.other (B.other a)).size = 2) : a.size = 0 := by
  injection h with h
  trace_state -- without smart unfolding the state would be a mess
  injection h with h

-- Theorems

mutual
def A.hasNoBEmpty : A → Prop
  | .self a => a.hasNoBEmpty
  | .other b => b.hasNoBEmpty
  | .empty => True
termination_by structurally x => x
def B.hasNoBEmpty : B → Prop
  | .self b => b.hasNoBEmpty
  | .other a => a.hasNoBEmpty
  | .empty => False
termination_by structurally x => x
end

-- Mixing Prop and Nat.
-- This works because both `Prop` and `Nat` are in the same universe (`Type`)

mutual
open Classical
noncomputable
def A.hasNoAEmpty : A → Prop
  | .self a => a.hasNoAEmpty
  | .other b => b.oddCount > 0
  | .empty => False
termination_by structurally x => x
noncomputable
def B.oddCount : B → Nat
  | .self b => b.oddCount + 1
  | .other a => if a.hasNoAEmpty then 0 else 1
  | .empty => 0
termination_by structurally x => x
end

-- Higher levels, but the same level `Type u`

mutual
open Classical
def A.type.{u} : A → Type u
  | .self a => Unit × a.type
  | .other b => Unit × b.type
  | .empty => PUnit
termination_by structurally x => x
def B.type.{u} : B → Type u
  | .self b => PUnit × b.type
  | .other a => PUnit × a.type
  | .empty => PUnit
termination_by structurally x => x
end


-- Mixed levels, should error

/--
error: invalid mutual definition, result types must be in the same universe level, resulting type for `A.strangeType` is
  Type : Type 1
and for `B.odderCount` is
  Nat : Type
-/
#guard_msgs in
mutual
open Classical
def A.strangeType : A → Type
  | .self a => Unit × a.strangeType
  | .other b => Fin b.odderCount
  | .empty => Unit
termination_by structurally x => x
def B.odderCount : B → Nat
  | .self b => b.odderCount + 1
  | .other a => if Nonempty a.strangeType then 0 else 1
  | .empty => 0
termination_by structurally x => x
end

namespace Reflexive

-- A mutual inductive reflexive data type
-- But these still only ever eliminate into `Prop`, so the following is not an example
-- for a reflexive data type that can eliminiate into `Type`, although `Acc` is:

mutual
inductive AccA {α : Sort u} (r : α → α → Prop) : α → Prop where
  | intro (x : α) (h : (y : α) → r y x → AccB r y) : AccA r x
inductive AccB {α : Sort u} (r : α → α → Prop) : α → Prop where
  | intro (x : α) (h : (y : α) → r y x → AccA r y) : AccB r x
end

-- TODO: What kind of recursive function can I even define over this data type,
-- given that it can only eliminate into `Prop`?

end Reflexive

namespace EvenOdd

mutual
  def isEven : Nat → Prop
    | 0 => True
    | n+1 => ¬ isOdd n
  termination_by structurally x => x

  def isOdd : Nat → Prop
    | 0 => False
    | n+1 => ¬ isEven n
  termination_by structurally x => x
end

end EvenOdd

namespace MutualIndNonMutualFun

mutual
inductive A
  | self : A → A
  | other : B → A
  | empty
inductive B
  | self : B → B
  | other : A → B
  | empty
end

def A.self_size : A → Nat
  | .self a => a.self_size + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x

#guard_msgs in
def B.self_size : B → Nat
  | .self b => b.self_size + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x

mutual
def A.weird_size1 : A → Nat
  | .self a => a.weird_size2 + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x
def A.weird_size2 : A → Nat
  | .self a => a.weird_size3 + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x
def A.weird_size3 : A → Nat
  | .self a => a.weird_size1 + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x
end

end MutualIndNonMutualFun

namespace NestedWithTuple

inductive Tree where
  | leaf
  | node : (Tree × Tree) → Tree

def Tree.below_1 (motive : Tree → Sort u) : Tree → Sort (max 1 u) :=
  @Tree.below motive (fun _tt => PUnit)

-- Assume we had this construction:
@[reducible] protected noncomputable def Tree.brecOn.{u}
  {motive : Tree → Sort u}
  (t : Tree)
  (F : (t : Tree) → Tree.below_1 motive t → motive t) :
  motive t :=
  let motive_below := fun t => PProd (motive t) (Tree.below_1 motive t)
  (@Tree.rec
    motive_below
    -- This is the hypthetical `Pair_Tree.below tt` unfolded
    (fun ⟨t₁,t₂⟩ => PProd PUnit.{u} (PProd (motive_below t₁) (PProd (motive_below t₂) PUnit)))
    ⟨F Tree.leaf PUnit.unit, PUnit.unit⟩
    (fun ⟨a₁,a₂⟩ a_ih => ⟨F (Tree.node ⟨a₁, a₂⟩) ⟨a_ih, PUnit.unit⟩, ⟨a_ih, PUnit.unit⟩⟩)
    (fun _a _a_1 a_ih a_ih_1 => ⟨PUnit.unit, ⟨a_ih, ⟨a_ih_1, PUnit.unit⟩⟩⟩)
    t).1

-- Then the decrecursifier works just fine:

#guard_msgs in
def Tree.size : Tree → Nat
  | leaf => 0
  | node (t₁, t₂) => t₁.size + t₂.size
termination_by structurally t => t

/--
info: theorem NestedWithTuple.Tree.size.eq_2 : ∀ (t₁ t₂ : Tree), (Tree.node (t₁, t₂)).size = t₁.size + t₂.size :=
fun t₁ t₂ => Eq.refl (Tree.node (t₁, t₂)).size
-/
#guard_msgs in
#print Tree.size.eq_2


end NestedWithTuple

namespace DifferentTypes

inductive A
  | self : A → A
  | empty

/--
error: Cannot use structural mutual recursion: The recursive argument of DifferentTypes.A.with_nat is of type DifferentTypes.A, the recursive argument of DifferentTypes.Nat.foo is of type Nat, and these are not mutually recursive.
-/
#guard_msgs in
mutual
def A.with_nat : A → Nat
  | .self a => a.with_nat + Nat.foo 1
  | .empty => 0
termination_by structurally x => x
def Nat.foo : Nat → Nat
  | n+1 => Nat.foo n
  | 0 => A.empty.with_nat
termination_by structurally x => x
end

end DifferentTypes
