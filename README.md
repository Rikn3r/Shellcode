# Shellcode
A school repository from Shellcode Module.

# Project architecture
### Shellcode
This directory is reserved for the first exercice, creation of a C program who open a Shell 
### wrapper
This directory is reserved for second activity, a wrapper ecxecuting Opcode given in parameter
     
### asm32
This directory is reserved for third exercice (in assembly) 
### asm64
This directory is reserved for third exercice (in assembly) 

# Build and run
### wrapper
Compile then execute wrapper:
```console
gcc wrapper.c -o wrapper -fno-stack-protector -z
./wrapper $(python2 -c 'print("<OPCODE>")'
```
