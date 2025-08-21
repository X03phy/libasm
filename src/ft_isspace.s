

section .text
	global ft_isspace

ft_isspace:
	cmp     dil, ' '
	je      .equal
	cmp     dil, 9
	je      .equal
	cmp     dil, 10
	je      .equal
	cmp     dil, 11
	je      .equal
	cmp     dil, 12
	je      .equal
	cmp     dil, 13
	je      .equal
; different
	xor     eax, eax
	ret
.equal:
	mov     eax, edi
	ret
