	.global _Z3addii
	.global _Z3subii
_Z3addii:
	add r0, r0, r1
	bx lr
_Z3subii:
	sub	r0, r0, r1
	bx lr
