	.file	"07forvswhile.cc"
	.text
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1564:
	.cfi_startproc
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE1564:
	.size	main, .-main
	.text
	.p2align 4,,15
	.globl	_Z3sumi
	.type	_Z3sumi, @function
_Z3sumi:
.LFB1565:
	.cfi_startproc
	testl	%edi, %edi
	jle	.L6
	xorl	%edx, %edx
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L5:
	addl	%edx, %eax
	addl	$1, %edx
	cmpl	%edx, %edi
	jne	.L5
	rep ret
	.p2align 4,,10
	.p2align 3
.L6:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE1565:
	.size	_Z3sumi, .-_Z3sumi
	.section	.text.startup
	.p2align 4,,15
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2046:
	.cfi_startproc
	leaq	_ZStL8__ioinit(%rip), %rdi
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	call	_ZNSt8ios_base4InitC1Ev@PLT
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE2046:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
