; void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
; (*cmp)(list_ptr->data, data_ref);
; (*free_fct)(list_ptr->data);

section .text
	global ft_list_remove_if
	extern free

ft_list_remove_if:
	test    rdi, rdi ; begin_list == NULL
	jz      .done

	test    rdx, rdx ; cmp == NULL
	jz      .done

	test    rcx, rcx ; free_fct == NULL
	jz      .done

	push    rbx ; *begin_list
	push    r12 ; data_ref
	push    r13 ; cmp
	push    r14 ; free_fct
	push    r15 ; previous
	push    rdi

	mov     rbx, [rdi]
	mov     r12, rsi
	mov     r13, rdx
	mov     r14, rcx
	xor     r15, r15 ; previous = NULL

.loop:
	test    rbx, rbx ; is it the end ?
	jz      .clean

	mov     rdi, [rbx]
	mov     rsi, r12
	call    r13

	test    rax, rax
	jnz     .different

; same
	mov     rax, [rbx + 8]
	test    r15, r15
	jnz     .is_prev

; no_prev
	pop     rdi
	mov     [rdi], rax
	push    rdi
	jmp     .remove

.is_prev:
	mov     [r15 + 8], rax

.remove:
	mov     rdi, [rbx]
	call    r14
	mov     rdi, rbx
	call    free
	jmp     .loop_inc

.different:
	mov     r15, rbx

.loop_inc:
	mov     rbx, [rbx + 8]
	jmp     .loop

.clean:
	pop     r15
	pop     r14
	pop     r13
	pop     r12
	pop     rbx

.done:
	ret
