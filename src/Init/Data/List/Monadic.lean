/-
Copyright (c) 2014 Parikshit Khanna. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Parikshit Khanna, Jeremy Avigad, Leonardo de Moura, Floris van Doorn, Mario Carneiro
-/
prelude
import Init.Data.List.TakeDrop

/-!
# Lemmas about `List.mapM` and `List.forM`.
-/

namespace List

open Nat

/-! ## Monadic operations -/

-- We may want to replace these `simp` attributes with explicit equational lemmas,
-- as we already have for all the non-monadic functions.
attribute [simp] mapA forA filterAuxM firstM anyM allM findM? findSomeM?

-- Previously `mapM.loop`, `filterMapM.loop`, `forIn.loop`, `forIn'.loop`
-- had attribute `@[simp]`.
-- We don't currently provide simp lemmas,
-- as this is an internal implementation and they don't seem to be needed.

/-! ### mapM -/

/-- Alternate (non-tail-recursive) form of mapM for proofs. -/
def mapM' [Monad m] (f : α → m β) : List α → m (List β)
  | [] => pure []
  | a :: l => return (← f a) :: (← l.mapM' f)

@[simp] theorem mapM'_nil [Monad m] {f : α → m β} : mapM' f [] = pure [] := rfl
@[simp] theorem mapM'_cons [Monad m] {f : α → m β} :
    mapM' f (a :: l) = return ((← f a) :: (← l.mapM' f)) :=
  rfl

theorem mapM'_eq_mapM [Monad m] [LawfulMonad m] (f : α → m β) (l : List α) :
    mapM' f l = mapM f l := by simp [go, mapM] where
  go : ∀ l acc, mapM.loop f l acc = return acc.reverse ++ (← mapM' f l)
    | [], acc => by simp [mapM.loop, mapM']
    | a::l, acc => by simp [go l, mapM.loop, mapM']

@[simp] theorem mapM_nil [Monad m] (f : α → m β) : [].mapM f = pure [] := rfl

@[simp] theorem mapM_cons [Monad m] [LawfulMonad m] (f : α → m β) :
    (a :: l).mapM f = (return (← f a) :: (← l.mapM f)) := by simp [← mapM'_eq_mapM, mapM']

@[simp] theorem mapM_append [Monad m] [LawfulMonad m] (f : α → m β) {l₁ l₂ : List α} :
    (l₁ ++ l₂).mapM f = (return (← l₁.mapM f) ++ (← l₂.mapM f)) := by induction l₁ <;> simp [*]

@[simp] theorem foldl_cons_eq_append [Monad m] [LawfulMonad m] (f : α → m β) (as : List α) (b : β) (bs : List β) :
    (as.foldlM (init := b :: bs) fun acc a => return ((← f a) :: acc)) =
      (· ++ b :: bs) <$> as.foldlM (init := []) fun acc a => return ((← f a) :: acc) := by
  induction as generalizing b bs with
  | nil => simp
  | cons a as ih =>
    simp [ih, _root_.map_bind, Functor.map_map, Function.comp_def]

theorem mapM_eq_reverse_foldlM_cons [Monad m] [LawfulMonad m] (f : α → m β) (l : List α) :
    mapM f l = reverse <$> (l.foldlM (fun acc a => return ((← f a) :: acc)) []) := by
  rw [← mapM'_eq_mapM]
  induction l with
  | nil => simp
  | cons a as ih =>
    simp only [mapM'_cons, ih, bind_map_left, foldlM_cons, LawfulMonad.bind_assoc, pure_bind,
      foldl_cons_eq_append, _root_.map_bind, Functor.map_map, Function.comp_def, reverse_append,
      reverse_cons, reverse_nil, nil_append, singleton_append]
    simp [bind_pure_comp]

/-! ### forM -/

-- We use `List.forM` as the simp normal form, rather that `ForM.forM`.
-- As such we need to replace `List.forM_nil` and `List.forM_cons`:

@[simp] theorem forM_nil' [Monad m] : ([] : List α).forM f = (pure .unit : m PUnit) := rfl

@[simp] theorem forM_cons' [Monad m] :
    (a::as).forM f = (f a >>= fun _ => as.forM f : m PUnit) :=
  List.forM_cons _ _ _

@[simp] theorem forM_append [Monad m] [LawfulMonad m] (l₁ l₂ : List α) (f : α → m PUnit) :
    (l₁ ++ l₂).forM f = (do l₁.forM f; l₂.forM f) := by
  induction l₁ <;> simp [*]

end List
