; int ft_lstsize(t_list *lst);

section .text
	global ft_lstsize

ft_lstsize:
	xor     eax, eax

.loop:
	test    rdi, rdi       ; lst == NULL
	jz      .done

	inc     eax

	mov     rdi, [rdi + 8] ; lst = lst->next
	jmp     .loop

.done:
	ret