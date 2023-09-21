section .data 	         ;defining printf args
	message: db "Hello, Holberton", 0
	format: db "%s", 10, 0

extern printf            ;declare printf as external function
global main              ;declare main as global function

section .text            ;code sectiom
main:
	push rbp         ;push rbp pointer onto the stack
	mov rdi, format  ;load the address of format in rdi (arg 1)
	mov rsi, message ;load the address of message in rsi (arg 2)
	mov rax, 0       ;clear rax register
	call printf      ;call printf with the above arguments
	pop rbp          ;pop rbp pointer from the stack
	mov rax, 0       ;set rax to 0 (to indicate success)
	ret              ;return
