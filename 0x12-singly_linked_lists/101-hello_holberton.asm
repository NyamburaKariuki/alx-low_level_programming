section .data
    hello db "Hello, Holberton", 0

section .text
    global main

    extern printf

main:
    sub rsp, 8       ; Align the stack on a 16-byte boundary (for macOS)
    
    mov rdi, hello   ; Format string
    call printf      ; Call printf function

    add rsp, 8       ; Restore the stack pointer
    xor eax, eax     ; Return 0 from main
    ret

