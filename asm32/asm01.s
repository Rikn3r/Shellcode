global_start
section .text

_start:
    ;instruction dest source
    mov eax, 1 
    mov ebx, 0
    int 80h