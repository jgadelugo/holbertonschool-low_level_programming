	section .text
	global main
	extern printf
main:
	mov     edi, mess
	mov     eax, 0
	call    printf
	
	section .data
mess: db      "Hello, Holberton", 10
