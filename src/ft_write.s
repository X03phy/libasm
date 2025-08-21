

section .text
	global ft_write
	extern __errno_location

ft_write:
	mov     rax, 1           ; load syscall number for write()
	syscall                  ; syscall
	cmp     rax, 0           ; check if error
	jge     .done            ; if no error ( >= 0 ) end the program
; error handling
	neg     rax              ; negate rax to get the error code
	mov     edi, eax         ; store the error in edi
	call    __errno_location ; store the errno pointer in rax
	mov     [rax], edi       ; set errno to the error code
	mov     rax, -1          ; set rax to -1 ( to indicate an error )
.done:
	ret                      ; return rax
