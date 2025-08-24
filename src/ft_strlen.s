; ----------------------------------------------------------------------------------------
; size_t ft_strlen( const char *s )
;
; The ft_strlen() function calculates the length of the string pointed
; to by s, excluding the terminating null byte ('\0').
; ----------------------------------------------------------------------------------------

section .text
	global ft_strlen

ft_strlen:
	xor     rax, rax             ; set rax to 0

.loop:
	mov     dl, byte [rdi + rax] ; store the char in rdx
	test    dl, dl               ; compare the actual char with 0
	je      .done                ; jump to the end if it's equal
	inc     rax                  ; increment rax
	jmp     .loop                ; jump back to the beginning of the loop

.done:
	ret                          ; return rax
