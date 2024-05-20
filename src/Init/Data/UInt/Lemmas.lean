/-
Copyright (c) 2024 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Data.UInt.Basic
import Init.Data.Fin.Lemmas

-- Should we create a macro?

namespace UInt8

theorem le_def {a b : UInt8} : a ≤ b ↔ a.1 ≤ b.1 := .rfl
theorem lt_def {a b : UInt8} : a < b ↔ a.1 < b.1 := .rfl
theorem lt_iff_val_lt_val {a b : UInt8} : a < b ↔ a.val < b.val := Iff.rfl
@[simp] protected theorem not_le {a b : UInt8} : ¬ a ≤ b ↔ b < a := Fin.not_le
@[simp] protected theorem not_lt {a b : UInt8} : ¬ a < b ↔ b ≤ a := Fin.not_lt
@[simp] protected theorem le_refl (a : UInt8) : a ≤ a := by simp [le_def]
protected theorem lt_irrefl (a : UInt8) : ¬ a < a := by simp
protected theorem le_trans {a b c : UInt8} : a ≤ b → b ≤ c → a ≤ c := Fin.le_trans
protected theorem lt_trans {a b c : UInt8} : a < b → b < c → a < c := Fin.lt_trans
protected theorem le_total (a b : UInt8) : a ≤ b ∨ b ≤ a := Fin.le_total a.1 b.1
protected theorem lt_asymm {a b : UInt8} (h : a < b) : ¬ b < a := Fin.lt_asymm h
protected theorem val_eq_of_eq {a b : UInt8} (h : a = b) : a.val = b.val := h ▸ rfl
protected theorem eq_of_val_eq {a b : UInt8} (h : a.val = b.val) : a = b := by cases a; cases b; simp at h; simp [h]
protected theorem ne_of_val_ne {a b : UInt8} (h : a.val ≠ b.val) : a ≠ b := fun h' => absurd (UInt8.val_eq_of_eq h') h
protected theorem ne_of_lt {a b : UInt8} (h : a < b) : a ≠ b := UInt8.ne_of_val_ne (Fin.ne_of_lt h)

end UInt8

namespace UInt16

theorem le_def {a b : UInt16} : a ≤ b ↔ a.1 ≤ b.1 := .rfl
theorem lt_def {a b : UInt16} : a < b ↔ a.1 < b.1 := .rfl
theorem lt_iff_val_lt_val {a b : UInt16} : a < b ↔ a.val < b.val := Iff.rfl
@[simp] protected theorem not_le {a b : UInt16} : ¬ a ≤ b ↔ b < a := Fin.not_le
@[simp] protected theorem not_lt {a b : UInt16} : ¬ a < b ↔ b ≤ a := Fin.not_lt
@[simp] protected theorem le_refl (a : UInt16) : a ≤ a := by simp [le_def]
protected theorem lt_irrefl (a : UInt16) : ¬ a < a := by simp
protected theorem le_trans {a b c : UInt16} : a ≤ b → b ≤ c → a ≤ c := Fin.le_trans
protected theorem lt_trans {a b c : UInt16} : a < b → b < c → a < c := Fin.lt_trans
protected theorem le_total (a b : UInt16) : a ≤ b ∨ b ≤ a := Fin.le_total a.1 b.1
protected theorem lt_asymm {a b : UInt16} (h : a < b) : ¬ b < a := Fin.lt_asymm h
protected theorem val_eq_of_eq {a b : UInt16} (h : a = b) : a.val = b.val := h ▸ rfl
protected theorem eq_of_val_eq {a b : UInt16} (h : a.val = b.val) : a = b := by cases a; cases b; simp at h; simp [h]
protected theorem ne_of_val_ne {a b : UInt16} (h : a.val ≠ b.val) : a ≠ b := fun h' => absurd (UInt16.val_eq_of_eq h') h
protected theorem ne_of_lt {a b : UInt16} (h : a < b) : a ≠ b := UInt16.ne_of_val_ne (Fin.ne_of_lt h)

end UInt16

namespace UInt32

theorem le_def {a b : UInt32} : a ≤ b ↔ a.1 ≤ b.1 := .rfl
theorem lt_def {a b : UInt32} : a < b ↔ a.1 < b.1 := .rfl
theorem lt_iff_val_lt_val {a b : UInt32} : a < b ↔ a.val < b.val := Iff.rfl
@[simp] protected theorem not_le {a b : UInt32} : ¬ a ≤ b ↔ b < a := Fin.not_le
@[simp] protected theorem not_lt {a b : UInt32} : ¬ a < b ↔ b ≤ a := Fin.not_lt
@[simp] protected theorem le_refl (a : UInt32) : a ≤ a := by simp [le_def]
protected theorem lt_irrefl (a : UInt32) : ¬ a < a := by simp
protected theorem le_trans {a b c : UInt32} : a ≤ b → b ≤ c → a ≤ c := Fin.le_trans
protected theorem lt_trans {a b c : UInt32} : a < b → b < c → a < c := Fin.lt_trans
protected theorem le_total (a b : UInt32) : a ≤ b ∨ b ≤ a := Fin.le_total a.1 b.1
protected theorem lt_asymm {a b : UInt32} (h : a < b) : ¬ b < a := Fin.lt_asymm h
protected theorem val_eq_of_eq {a b : UInt32} (h : a = b) : a.val = b.val := h ▸ rfl
protected theorem eq_of_val_eq {a b : UInt32} (h : a.val = b.val) : a = b := by cases a; cases b; simp at h; simp [h]
protected theorem ne_of_val_ne {a b : UInt32} (h : a.val ≠ b.val) : a ≠ b := fun h' => absurd (UInt32.val_eq_of_eq h') h
protected theorem ne_of_lt {a b : UInt32} (h : a < b) : a ≠ b := UInt32.ne_of_val_ne (Fin.ne_of_lt h)

end UInt32

namespace UInt64

theorem le_def {a b : UInt64} : a ≤ b ↔ a.1 ≤ b.1 := .rfl
theorem lt_def {a b : UInt64} : a < b ↔ a.1 < b.1 := .rfl
theorem lt_iff_val_lt_val {a b : UInt64} : a < b ↔ a.val < b.val := Iff.rfl
@[simp] protected theorem not_le {a b : UInt64} : ¬ a ≤ b ↔ b < a := Fin.not_le
@[simp] protected theorem not_lt {a b : UInt64} : ¬ a < b ↔ b ≤ a := Fin.not_lt
@[simp] protected theorem le_refl (a : UInt64) : a ≤ a := by simp [le_def]
protected theorem lt_irrefl (a : UInt64) : ¬ a < a := by simp
protected theorem le_trans {a b c : UInt64} : a ≤ b → b ≤ c → a ≤ c := Fin.le_trans
protected theorem lt_trans {a b c : UInt64} : a < b → b < c → a < c := Fin.lt_trans
protected theorem le_total (a b : UInt64) : a ≤ b ∨ b ≤ a := Fin.le_total a.1 b.1
protected theorem lt_asymm {a b : UInt64} (h : a < b) : ¬ b < a := Fin.lt_asymm h
protected theorem val_eq_of_eq {a b : UInt64} (h : a = b) : a.val = b.val := h ▸ rfl
protected theorem eq_of_val_eq {a b : UInt64} (h : a.val = b.val) : a = b := by cases a; cases b; simp at h; simp [h]
protected theorem ne_of_val_ne {a b : UInt64} (h : a.val ≠ b.val) : a ≠ b := fun h' => absurd (UInt64.val_eq_of_eq h') h
protected theorem ne_of_lt {a b : UInt64} (h : a < b) : a ≠ b := UInt64.ne_of_val_ne (Fin.ne_of_lt h)

end UInt64
