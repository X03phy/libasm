

section .text
	global ft_atoi_base
	extern ft_strlen
	extern ft_isspace

; rbx -> array
; rcx -> sign
; rdx -> size base
; r8  -> 

ft_atoi_base:
	mov     rbx, rdi ; store the string
	mov     ecx, 1   ; store the sign
	mov     rdi, rsi
	call    ft_strlen
	mov     rdx, rax ; store the len of the base
.loop_whitespaces:
	mov     dil, byte [rbx] ; a checker ici
	call    ft_isspace
	test    eax, eax
	jz      .check_negative_sign ; on a fini de tt checker
	inc     rbx
	jmp     .loop_whitespaces
.check_negative_sign:
	mov     al, byte [rbx]
	cmp     al, '-'
	jne     .check_positive_sign
	inc     ebx
	neg     ecx
	jmp     .convert
.check_positive_sign:
	mov     al, byte [rbx]
	cmp     al, '+'
	jne     .convert
	inc     ebx
.convert:
	xor     eax, eax
.loop_convert:
; check if in base
	mov r8, [rbx]
.check_loop:
	inc rdi

	cmp rdi, rdx
	jl .check_loop
.ufdeidew
	mul     edx  ; jsp si c'est bon
	mov     r8, byte [rsi + 2] ; changer r8 par autre chose et coder la sous fct dcp
	sub     r8, '0'
	add     eax, r8
	; jmp     .loop_convert
	ret
