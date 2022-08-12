; printing "Hello, Holberton"

;Author: rotex
;Date: 12-Aug-2022

section .text
	global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, len
	syscall


section .data
	msg db "Hello, Holberton",10   ;0xA or 10 equates to newline
	len equ $ -msg		   	;passing len of msg
