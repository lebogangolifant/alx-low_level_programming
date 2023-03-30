; Author: Lebogang Olifant
; Desc: A 64-bit program in assembly that prints Hello, Holberton followed by a new line
; Usage: Compile with nasm and gcc, then run the executable

section .data
    hello db "Hello, Holberton", 0x0a, 0x00

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    mov rsi, 0
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

