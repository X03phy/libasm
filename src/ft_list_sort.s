; void ft_list_sort(t_list **begin_list, int (*cmp)());
; (*cmp)(list_ptr->data, list_other_ptr->data);

section .text
	global ft_list_sort

ft_list_sort:
	test    rdi, rdi       ; begin_list == NULL
	jz      .done

	test    rsi, rsi       ; cmp == NULL
	jz      .done

	mov     rax, [rdi]     ; *begin_list == NULL
	test    rax, rax
	jz      .done

	push    rbx ; swapped
	push    r12 ; ptr
	push    r13 ; ptr->next
	push    r14 ; end

	xor     r14, r14 ; initialize r14 to NULL

.outer_loop:
	xor    bl, bl ; swapped = 0
	mov    r12, [rdi] ; ptr = *begin_list

.inner_loop:
	mov    r13, [r12 + 8]
	cmp    r13, r14
	je     .outer_loop_check

	push    rdi
	push    rsi

	mov     rcx, rsi
	mov     rdi, [r12] ; ptr->data
	mov     rsi, [r13] ; ptr->next->data
	call    rcx

	pop     rsi
	pop     rdi

	cmp     rax, 0
	jle    .inner_loop_inc

; swap
	mov     rax, [r12]
	mov     rcx, [r13]

	mov     [r12], rcx ; ptr->data = ptr->next->data
	mov     [r13], rax ; ptr->next->data = tmp

	mov     bl, 1

.inner_loop_inc:
	mov     r12, r13
	jmp     .inner_loop

.outer_loop_check:
	mov     r14, r12
	test    bl, bl
	jnz     .outer_loop

.clean:
	add     rsp, 32      ; clean the stack

.done:
	ret
