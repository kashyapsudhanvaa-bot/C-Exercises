	.file	"ReadyRefresher1Stretch.c"
	.text
	.globl	x
	.bss
	.align 4
x:
	.space 4
	.section .rdata,"dr"
.LC0:
	.ascii "Enter your number: \0"
.LC1:
	.ascii "%d\0"
.LC2:
	.ascii "Even\0"
.LC3:
	.ascii "Odd\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	call	fflush
	leaq	x(%rip), %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	__mingw_scanf
	movl	x(%rip), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L2
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	puts
	jmp	.L3
.L2:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	puts
.L3:
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-Builds project) 16.2.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	fflush;	.scl	2;	.type	32;	.endef
