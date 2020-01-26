  .global _Z9sum_rangeii
_Z9sum_rangeii:
  // loop from r0 to r1, adding each number to r2

  mov   r2, #0 // store sum in r2, start with 0
loop:
  cmp   r0, r1 // r0 - r1 => set Z flag when zero
  bgt   end // escape loop if r0 > r1
  add   r2, r0 // add i to sum
  add   r0, #1 // increase i
  b     loop // continue loop
end:
  mov   r0, r2 // return sum
  bx    lr
