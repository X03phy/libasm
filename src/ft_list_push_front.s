; void ft_lstadd_front(t_list **lst, t_list *new);

section .text
	global ft_list_push_front

ft_list_push_front:
	test    rdi, rdi       ; lst == NULL
	jz      .done

	test    rsi, rsi       ; rsi == NULL
	jz      .done

	mov     rax, [rdi]
	mov     [rsi + 8], rax ; new->next = *lst

	mov     [rdi], rsi     ; *lst = new

.done
	ret
