; void ft_list_sort(t_list **begin_list, int (*cmp)());
; (*cmp)(list_ptr->data, list_other_ptr->data);

section .text
	global ft_list_sort

ft_list_sort:
	test    rdi, rdi       ; begin_list == NULL
	jz      .done

	test    rsi, rsi       ; cmp == NULL
	jz      .done

	mov     rax, [rdi]
	test    rax, rax
	jz      .done

.outer_loop:
	xor     bl, bl   ; swapped = 0
	mov     rcx, [rdi] ; ptr = *begin_list

.inner_loop:
	mov     rdx, [rcx + 8]  ; ptr->next != 0
	test    rdx, rdx
	jz      .inner_loop_end

	push rdi      ; save begin_list
	push rsi      ; save cmp()

	mov  rax, rsi

	mov  rdi, [rdi]
	mov  rsi, rax


	cmp    rax, 0
	jle    .inner_loop_inc

	swap

.inner_loop_inc


inner_loop_end:
	test   bl, bl
	jz .done

.done
	ret
