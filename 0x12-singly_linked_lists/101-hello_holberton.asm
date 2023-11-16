section .data
hello db "Hello, Holberton", 0

section .text
global main

extern printf

main:
sub rsp, 8 

mov rdi, hello
all printf

add rsp, 8
xor eax, eax
ret
