//Zara Luigi
//Classe 4E

/*
crivere un programma in linguaggio C che usa il comando 
della shell cp per copiare un file da una posizione 
sorgente ad una posizione destinazione

esempio:
$ ./a.out costituzione.txt /tmp/costituzione.txt
*/

//importazione librerie
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    //controllo numero di argomenti
    if(argc < 3){
        printf("Numero di argomenti errato");
        exit(1);
    }

    execl("/usr/bin/cp", "cp", argv[1], argv[2], (char *)0);

    return 0;
}