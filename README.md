# Shellcode
A school repository from Shellcode Module.

# Repo architecture
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
(OPCODE = '\x48\x31\xd2\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xeb\x08\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\xb0\x3b\x0f\x05')
```console
gcc wrapper.c -o wrapper -fno-stack-protector -z
./wrapper $(python2 -c 'print("<OPCODE>")'
```
