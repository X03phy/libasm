

section .text
	global ft_issign

ft_issign:
	cmp     dil, '+'
	je      .equal
	cmp     dil, '-'
	je      .equal
; different
	xor     eax, eax
	ret
.equal:
	mov     eax, edi
	ret