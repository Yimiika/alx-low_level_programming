section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    push hello
    push format
    call printf
    add rsp, 16

    mov rsp, rbp
    pop rbp
    ret
