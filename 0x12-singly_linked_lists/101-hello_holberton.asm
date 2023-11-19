%define STDOUT 1
%define SYS_write 1
%define SYS_exit 60

extern printf

section .text
  global main

main:
  mov rdi, msg 
  mov rsi, len
  mov rax, 0
  call printf
  mov rax, 60
  mov rdi, 0
  syscall

section .data
msg: db "Hello, Holberton", 10
len: equ $ - msg
