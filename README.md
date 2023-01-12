# Shellcode
Shellcode module repository - computer engineering studies, cyber security specialization

# Repo architecture
### shellcode
This directory is reserved for activity 1 question 4, creation of a C program who open a Shell 
### wrapper
This directory is reserved for first activity, a wrapper executing an OPCODE given in parameter
     
### asm32 and asm64
These two directories are reserved for second activity (respectively in assembly x32 and x64) 

# Build and run
### wrapper
Compile then execute wrapper:
```console
gcc wrapper.c -o wrapper -fno-stack-protector -z
./wrapper $(python2 -c 'print("<OPCODE>")'
```
### asm32 and asm64
Compile then execute asm0X.s (X is a digit) : 
```console
./build.sh asm0X
./asm0X
```
# Activities
### Activity 1
1. Preparation of the dev VM.
2. Create a github repository with an author file at its root containing first name last name and class.
Send me the link of the github in private on discord.
3. In the repository, create a directory "wrapper" and a directory "shellcodes".
4. In the shellcodes directory, create the file shellcode01.c and develop a shellcode in C, (a program that launches a
program which launches a /bin/sh), analyze it with objdump, gdb, gdb-peda, radare2, ltrace, strace.
5. In the wrapper directory you will have to develop (C or python language advised) a shellcode wrapper
of shellcode that will run : ./wrapper <shellcode>.
The source file will have to contain your name, first name and a "user guide".
Bonus of the wrapper : Display of the shellcode, its size, memory status, debugging options, etc
6. Bonus TP : Develop a program vulnerable to buffer overflow and run it.

### Activity 2
1. In the github repo, create the directories "asm32" and "asm64" and develop the following associated programs in the 2 directories respectively in 32 and 64 bits:
2. ./asm01.s should return 0
3. ./asm02.s should display 1337 and return 0
4. ./asm03.s should display 1337 and return 0 if it receives in input 42 otherwise 1
5. ./asm04.s must return 0 if the number entered is even otherwise 1
6. ./asm05.s must execute asm01
7. ./asm06.s should run /bin/sh
8. ./build.sh should compile all
9. ./create_shellcode.sh should transform the programs passed as parameters into
shellcode (beware of nullbytes)
10. Execute the shellcodes created in the C wrapper
11. Bonus : in the wrapper directory, develop an asm wrapper.
