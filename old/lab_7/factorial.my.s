  .global _Z9factoriali

_Z9factoriali:
  // r0: i
  mov   r1, #1 // aggregate; 0! = 1
loop:
  cmp   r0, #1
  ble   end // escape loop if r0 <= 1
  mul   r1, r0, r1 // aggregate * i
  sub   r0, #1 // i--
  b     loop // continue loop
end:
  mov   r0, r1
  bx    lr
