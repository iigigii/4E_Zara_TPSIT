//Zara Luigi
//Classe 4E

/*
Scrivere un programma in linguaggio C che usa il comando 
della shell cat per mostrare a video un file di testo
presente in argv[1]

esempio:
$ ./a.out costituzione.txt
*/

//importazione librerie
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    //controllo numero di argomenti
    if(argc < 2){
        printf("Numero di argomenti errato");
        exit(1);
    }

    execl("/usr/bin/cat", "cat", argv[1], (char *)0);

    return 0;
}