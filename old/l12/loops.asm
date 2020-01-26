  mov r0, #0 // start loop
  b loop4_cond
loop4:
  // loop body
  add r0, r0, #1
loop4_cond:
  cmp r0, #5
  beq out
out:


//////////////////////////////::

ldrb r1, [r0] // dereference r0 and store in r1 (brackets can only be used for ldrb)
