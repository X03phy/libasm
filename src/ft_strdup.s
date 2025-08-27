

section .text
	global ft_strdup
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
	test    rdi, rdi    ; check if s == NULL
	jz      .done

	push    rdi         ; store s

; get the size
	call    ft_strlen
	inc     rax         ; increment rax for '\0'

; allocate memory
	mov     rdi, rax
	call    malloc
	test    rax, rax
	jz      .clean

; copy data
	mov     rdi, rax
	pop     rsi         ; pop and store to rsi
	call    ft_strcpy
	ret

.clean
	add     rsp, 8      ; clean the stack
	xor     rax, rax    ; set rax to 0

.done
	ret
