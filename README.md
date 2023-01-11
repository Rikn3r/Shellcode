# Shellcode
Dépo du cours de ShellCode

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
