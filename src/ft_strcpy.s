; ----------------------------------------------------------------------------------------
; char *strcpy( char *dest, const char *src )
;
; The ft_strcpy() function copies the string pointed to by src,
; including the terminating null byte ('\0'), to the buffer pointed to by dest.
; ----------------------------------------------------------------------------------------

section .text
	global ft_strcpy

ft_strcpy:
	mov     rax, rdi       ; set rax to dest
.loop:
	mov     bl, byte [rsi] ; store a byte
	mov     [rdi], bl      ; copy that byte
	test    bl, bl         ; test if 0 ( more efficient than: "cmp bl, 0" )
	jz      .done          ; jump to the end
	inc     rdi            ; increment dest
	inc     rsi            ; increment src
	jmp     .loop          ; jump back to the beginning of the loop
.done
	ret                    ; return rax
