

section .text
	global ft_atoi_base

ft_atoi_base:
	xor   rax, rax ; nb

	test  rdi, rdi
	jz    .done
	test  dl, dl
	jz    .done
	xor   rbx, rbx ; i

.is_valid_base_loop:
	mov   dl, byte [rsi + rbx]
	test  dl, dl
	jz    .is_correct_base_length

; check if the base contains an invalid character
	cmp	dl, '+'
	je    .done
	cmp	dl, '-'
	je    .done
	cmp	dl, ' '
	je    .done
	cmp	dl, 9
	je    .done
	cmp	dl, 10
	je    .done
	cmp	dl, 11
	je    .done
	cmp	dl, 12
	je    .done
	cmp	dl, 13
	je    .done

; check for duplicate
	xor   rcx, rcx ; j = 0 ;  a mettre apres tous les cmps

	; ici <
.check_for_duplicate_loop:
	cmp   rbx, rcx
	jle   .is_valid_base_loop_inc ; si i <= j
	cmp   byte [rsi + rcx], dl
	je    .done
	inc   rcx
	jmp   .check_for_duplicate_loop

.is_valid_base_loop_inc:
	inc   rbx
	jmp   .is_valid_base_loop

.is_correct_base_length:
	cmp   rbx, 2
	jl    .done

.skip_whitespaces_loop:
	cmp	byte [rdi], ' '
	je    .skip_whitespaces_loop_inc
	cmp	byte [rdi], 9
	je    .skip_whitespaces_loop_inc
	cmp	byte [rdi], 10
	je    .skip_whitespaces_loop_inc
	cmp	byte [rdi], 11
	je    .skip_whitespaces_loop_inc
	cmp	byte [rdi], 12
	je    .skip_whitespaces_loop_inc
	cmp	byte [rdi], 13
	je    .skip_whitespaces_loop_inc
	jmp   .skip_signs

.skip_whitespaces_loop_inc:
	inc   rdi
	jmp   .skip_whitespaces_loop

.skip_signs:
	mov   rcx, 1 ; sign

.skip_signs_loop:
	cmp   byte [rdi], '-'
	jne   .check_plus
	neg   rcx 
	jmp   .skip_signs_loop_inc

.check_plus:
	cmp   byte [rdi], '+'
	jne   .is_in_base

.skip_signs_loop_inc:
	inc   rdi
	jmp   .skip_signs_loop

.is_in_base:
	mov   dl, byte [rdi]  
	test  dl, dl
	jz    .convert_done
	xor   rdx, rdx

.is_in_base_loop:
	cmp   rdx, rbx     ; cmp j with n
	jge   .convert_done ; not in base

	mov   r8b, byte [rsi + rdx] ; check
	cmp   byte [rdi], r8b 
	je    .convert

.is_in_base_loop_inc:
	inc   rdx
	jmp   .is_in_base_loop

.convert:
	imul  rax, rbx
	add   rax, rdx
	inc   rdi
	jmp   .is_in_base

.convert_done:
	imul  rax, rcx

.done:
	ret
