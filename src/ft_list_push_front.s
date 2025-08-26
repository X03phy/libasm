; void ft_list_push_front(t_list **begin_list, void *data)

section .text
	global ft_list_push_front
	extern malloc

ft_list_push_front:
	test    rdi, rdi       ; lst == NULL
	jz      .done

	test    rsi, rsi       ; new == NULL
	jz      .done

	push    rdi
	push    rsi

	mov     rdi, 16        ; sizeof(t_list)
	call    malloc

	pop     rsi
	pop     rdi

	test    rax, rax       ; malloc failed
	jz      .done

	mov     [rax], rsi     ; new->data = value
	mov     rcx, [rdi]
	mov     [rax + 8], rcx ; new->next = *lst
	mov     [rdi], rax     ; *begin_list = new

.done:
	ret
