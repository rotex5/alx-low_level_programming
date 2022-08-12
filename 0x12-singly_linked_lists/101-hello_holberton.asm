; printing "Hello, Holberton"

;Author: rotex
;Date: 12-Aug-2022

section .text
	global main
main:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4		;system call (sys_write)
	int 0x80		;to call kernel

	mov eax, 1		;system call (sys_exit)
	int 0x080

section .data
	msg db "Hello, Holberton",10   ;0xA or 10 equates to newline
	len equ $ -msg		   	;passing len of msg
