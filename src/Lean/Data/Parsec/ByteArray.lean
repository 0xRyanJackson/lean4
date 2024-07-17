/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
prelude
import Lean.Data.Parsec.Basic
import Init.Data.ByteArray.Basic
import Init.Data.String.Extra

namespace Lean
namespace Parsec
namespace ByteArray

instance : Input ByteArray.Iterator UInt8 Nat where
  pos it := it.pos
  next it := it.next
  curr it := it.curr
  hasNext it := it.hasNext

abbrev Parser (α : Type) : Type := Parsec ByteArray.Iterator α

protected def Parser.run (p : Parser α) (arr : ByteArray) : Except String α :=
  match p arr.iter with
  | .success _ res => Except.ok res
  | .error it err  => Except.error s!"offset {repr it.pos}: {err}"

@[inline]
def pbyte (b : UInt8) : Parser UInt8 := attempt do
  if (← any) = b then pure b else fail s!"expected: '{b}'"

@[inline]
def skipByte (b : UInt8) : Parser Unit := pbyte b *> pure ()

def skipBytes (arr : ByteArray) : Parser Unit := do
  for b in arr do
    skipByte b

@[inline]
def pstring (s : String) : Parser String := do
  skipBytes s.toUTF8
  return s

@[inline]
def skipString (s : String) : Parser Unit := pstring s *> pure ()

/--
Parse a `Char` that can be represented in 1 byte. If `c` uses more than 1 byte it is truncated.
-/
@[inline]
def pByteChar (c : Char) : Parser Char := attempt do
  if (← any) = c.toUInt8 then pure c else fail s!"expected: '{c}'"

/--
Skip a `Char` that can be represented in 1 byte. If `c` uses more than 1 byte it is truncated.
-/
@[inline]
def skipByteChar (c : Char) : Parser Unit := skipByte c.toUInt8

@[inline]
def digit : Parser Char := attempt do
  let b ← any
  if '0'.toUInt8 ≤ b ∧ b ≤ '9'.toUInt8 then return Char.ofUInt8 b else fail s!"digit expected"

@[inline]
def hexDigit : Parser Char := attempt do
  let b ← any
  if ('0'.toUInt8 ≤ b ∧ b ≤ '9'.toUInt8)
   ∨ ('a'.toUInt8 ≤ b ∧ b ≤ 'f'.toUInt8)
   ∨ ('A'.toUInt8 ≤ b ∧ b ≤ 'F'.toUInt8) then return Char.ofUInt8 b else fail s!"hex digit expected"

@[inline]
def asciiLetter : Parser Char := attempt do
  let b ← any
  if ('A'.toUInt8 ≤ b ∧ b ≤ 'Z'.toUInt8) ∨ ('a'.toUInt8 ≤ b ∧ b ≤ 'z'.toUInt8) then
    return Char.ofUInt8 b
  else
    fail s!"ASCII letter expected"

private partial def skipWs (it : ByteArray.Iterator) : ByteArray.Iterator :=
  if it.hasNext then
    let b := it.curr
    if b = '\u0009'.toUInt8 ∨ b = '\u000a'.toUInt8 ∨ b = '\u000d'.toUInt8 ∨ b = '\u0020'.toUInt8 then
      skipWs it.next
    else
      it
  else
   it

@[inline]
def ws : Parser Unit := fun it =>
  .success (skipWs it) ()

def take (n : Nat) : Parser ByteArray := fun it =>
  let subarr := it.array.extract it.idx (it.idx + n)
  if subarr.size != n then
    .error it s!"expected: {n} bytes"
  else
    .success (it.forward n) subarr

end ByteArray
end Parsec
end Lean
