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

	push    rbx ; current
	push    r12 ; data_ref
	push    r13 ; cmp
	push    r14 ; free_fct
	push    r15 ; tmp

	mov     rbx, rdi
	mov     r12, rsi
	mov     r13, rdx
	mov     r14, rcx

.loop:
	mov     rax, [rbx]
	test    rax, rax ; is it the end ?
	jz      .clean

	mov     rax, [rbx]
	mov     rdi, [rax]
	mov     rsi, r12
	call    r13

	test    rax, rax
	jnz     .different

; same
	mov     r15, [rbx]
	mov     rax, [r15 + 8]
	mov     [rbx], rax

	mov     rdi, [r15]
	call    r14
	
	mov     rdi, r15
	call    free

	jmp     .loop

.different:
	mov     rax, [rbx]      ; rax = *current (t_list *)
	mov     rbx, rax        ; rbx = *current
	add     rbx, 8           ; rbx = &(*current)->next (offset 8 du champ next)
	jmp     .loop

.clean:
	pop     r15
	pop     r14
	pop     r13
	pop     r12
	pop     rbx

.done:
	ret
