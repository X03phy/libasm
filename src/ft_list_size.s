; int ft_list_size(t_list *lst);

section .text
	global ft_list_size

ft_list_size:
	xor     eax, eax

.loop:
	test    rdi, rdi       ; lst == NULL
	jz      .done

	inc     eax

	mov     rdi, [rdi + 8] ; lst = lst->next
	jmp     .loop

.done:
	ret