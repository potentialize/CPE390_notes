  .global _Z6my_andii
  .global _Z6my_eorii
  .global _Z6my_orrii

_Z6my_andii:
  .fnstart
  and R0, R0, R1
  bx LR
  .fnend

_Z6my_eorii:
  .fnstart
  eor R0, R0, R1
  bx LR
  .fnend

_Z6my_orrii:
  .fnstart
  orr R0, R0, R1
  bx LR
  .fnend
