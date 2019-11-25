  .global x @ export x to other files

x: @ define address x right here
  .fn_start @ assembly directive: func starts right here

  mov r0, #0
  mov r5, #7 @ max direct load
  ldr r10, #=100
  ldr r9, #=0xFFFFFFFF @ 077 => base 8 in C++
