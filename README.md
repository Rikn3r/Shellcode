# Shellcode
A school repository from Shellcode Module.

# Repo architecture
### Shellcode
This directory is reserved for the first exercice, creation of a C program who open a Shell 
### wrapper
This directory is reserved for first activity, a wrapper ecxecuting Opcode given in parameter
     
### asm32/64
These two directories are reserved for second activity (respectively in assembly x32 and x64) 

# Build and run
### wrapper
Compile then execute wrapper: 
(OPCODE = '\x48\x31\xd2\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xeb\x08\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\xb0\x3b\x0f\x05')
```console
gcc wrapper.c -o wrapper -fno-stack-protector -z
./wrapper $(python2 -c 'print("<OPCODE>")'
```
### ASM 32/64
Compile then execute asm0X.s (X is a digit) : 
```console
./build.sh asm0X
./asm0X
```
# Activité
### Activité 1
1. Préparation de la VM de dev.
2. Création d’un repository github avec à sa racine un fichier auteur contenant prénom nom et classe.
M’envoyer le lien du github en privé sur discord.
3. Dans le repository, créer un répertoire “wrapper” et un répertoire “shellcodes”.
4. Dans le répertoire shellcodes, créez le fichier shellcode01.c et développez un shellcode en C, (un
programme qui lance un /bin/sh), l’analyser avec objdump, gdb, gdb-peda, radare2, ltrace, strace.
5. Dans le répertoire wrapper vous allez devoir développer (Langage C ou python conseillés) un wrapper
de shellcode qui s’exécutera : ./wrapper <shellcode>
Le fichier source devra contenir votre nom, prénom et un “guide d’utilisation”.
Bonus du wrapper : Affichage du shellcode, de sa taille, état de la mémoire, options de débug, etc
6. TP Bonus : Développer un programme vulnérable au buffer overflow et l’exécuter.

### Activité 2
1. Dans le repo github, créer les répertoires “asm32” et “asm64” et développer les programmes associés suivants dans les 2 répertoires respectivement en 32 et 64 bits:
2. ./asm01.s devra retourner 0
3. ./asm02.s devra afficher 1337 et retourner 0
4. ./asm03.s devra afficher 1337 et retourner 0 si il reçoit en entrée 42 sinon 1
5. ./asm04.s devra retourner 0 si le nombre entré est pair sinon 1
6. ./asm05.s devra exécuter asm01
7. ./asm06.s devra exécuter /bin/sh
8. ./build.sh devra tous les compiler
9. ./create_shellcode.sh devra transformer les programmes passés en paramètes en
shellcode (attention aux nullbytes)
10. Exécuter les shellcodes créés dans le wrapper C
11. Bonus : dans le répertoire wrapper, développer un wrapper an asm.
