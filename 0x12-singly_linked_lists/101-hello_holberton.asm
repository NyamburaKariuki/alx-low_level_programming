section .data
    hello db "Hello, Holberton", 0
    newline db "%s", 10, 0 ; ASCII code for newline character

section .text
    global main

    extern printf

main:
    sub rsp, 8                ; Allocate space for the parameters (Windows-specific)

    mov rdi, hello            ; Format string
    mov rdx, newline          ; Newline character
    mov rcx, 0                ; Variadic function, no float arguments
    call printf               ; Call printf function

    add rsp, 8                ; Clean up the stack

    mov eax, 0                ; Return 0 from main
    ret

