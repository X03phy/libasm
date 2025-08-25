

section .text
	global ft_atoi_base

ft_atoi_base:
	xor     rax, rax                   ; nb = 0
	test    rdi, rdi                   ; check if str is null
	jz      .done
	test    dl, dl                     ; check if base is null
	jz      .done
	xor     rbx, rbx                   ; i = 0

.is_valid_base_loop:                   ; check if the base contains an invalid character
	mov     dl, byte [rsi + rbx]
	test    dl, dl
	jz      .is_correct_base_length

	cmp	    dl, '+'
	je      .done
	cmp	    dl, '-'
	je      .done
	cmp     dl, ' '
	je      .done
	cmp	    dl, 9                      ; '\t'
	je      .done
	cmp	    dl, 10                     ; '\n'
	je      .done
	cmp	    dl, 11                     ; '\v'
	je      .done
	cmp	    dl, 12                     ; '\f'
	je      .done
	cmp	    dl, 13                     ; '\r'
	je      .done

; check for duplicate
	xor     rcx, rcx                   ; j = 0 ;  a mettre apres tous les cmps

.check_for_duplicate_loop:
	cmp     rbx, rcx
	jle     .is_valid_base_loop_inc    ; if i <= j increment j
	cmp     byte [rsi + rcx], dl       ; check if invalid character in base
	je      .done
	inc     rcx
	jmp     .check_for_duplicate_loop

.is_valid_base_loop_inc:
	inc     rbx
	jmp     .is_valid_base_loop

.is_correct_base_length:
	cmp     rbx, 2
	jl      .done

.skip_whitespaces_loop:
	cmp     byte [rdi], ' '
	je      .skip_whitespaces_loop_inc
	cmp     byte [rdi], 9              ; '\t'
	je      .skip_whitespaces_loop_inc 
	cmp     byte [rdi], 10             ; '\n'
	je      .skip_whitespaces_loop_inc
	cmp     byte [rdi], 11             ; '\v'
	je      .skip_whitespaces_loop_inc
	cmp     byte [rdi], 12             ; '\f'
	je      .skip_whitespaces_loop_inc
	cmp     byte [rdi], 13             ; '\r'
	je      .skip_whitespaces_loop_inc
	jmp     .skip_signs

.skip_whitespaces_loop_inc:
	inc     rdi
	jmp     .skip_whitespaces_loop

.skip_signs:
	mov     rcx, 1                     ; sign = 1

.skip_signs_loop:
	cmp     byte [rdi], '-'
	jne     .check_plus
	neg     rcx
	jmp     .skip_signs_loop_inc

.check_plus:
	cmp     byte [rdi], '+'
	jne    .is_in_base

.skip_signs_loop_inc:
	inc     rdi
	jmp     .skip_signs_loop

.is_in_base:
	mov     dl, byte [rdi]  
	test    dl, dl
	jz      .convert_done              ; jump if it's not in base
	xor     rdx, rdx

.is_in_base_loop:
	cmp     rdx, rbx                   ; cmp j with n
	jge     .convert_done              ; not in base

	mov     r8b, byte [rsi + rdx]      ; check
	cmp     byte [rdi], r8b 
	je      .convert

.is_in_base_loop_inc:
	inc     rdx
	jmp     .is_in_base_loop

.convert:
	imul    rax, rbx                   ; nb *= n
	add     rax, rdx                   ; nb += pos
	inc     rdi
	jmp     .is_in_base

.convert_done:
	imul    rax, rcx                   ; nb *= sign

.done:
	ret
