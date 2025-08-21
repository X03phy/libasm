



section .text
	global ft_strcmp

ft_strcmp:
.loop:
	mov     al, byte [rdi]  ; mov the actual byte of rdi to the first register
	mov     bl, byte [rsi]  ; mov the actual byte of rsi to the second register
	cmp     al, bl          ; compare al with bl
	jnz     .different      ; jump to .different if *s1 != *s2
	test    al, al          ; check if it is the end of s1
	jz      .equal          ; jump to .equal if it's the end of s1
	inc     rdi             ; increment rdi
	inc     rsi             ; increment rsi
	jmp     .loop           ; jump back to the beginning of the loop
.different:
	movzx   eax, al         ; copy al and expand it to 32 bits
	movzx   ebx, bl         ; copy bl and expand it to 32 bits
	sub     eax, ebx        ; eax = eax - ebx
	ret                     ; return eax
.equal:
	xor eax, eax            ; set eax to 0
	ret                     ; return eax ( equal to 0 here )
