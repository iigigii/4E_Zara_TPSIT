//Zara Luigi 
//Classe 4E
//08-01-2025

/*
* Scrivere un programma in linguaggio C che scriva l'alfabeto su un file 
* il cui nome deve essere letto da argv[1]
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //read - write - close
#include <sys/stat.h> //open
#include <fcntl.h> //flag open 

int main (int argc, char *argv[]){
    //dichiarazione e inizializzazione delle variabili
    char alfabeto[] = "abcdefghijklmnopqrstvuxyz";

    if(argc != 2){
        printf("Numero di argomenti errato");
        exit(1);
    }

    int fd = open(argv[1], O_WRONLY | O_CREAT, 0777);
    //write(int fd, char* buf, int n) -> fd, alfabeto, lunghezza alfabeto
    write(fd, alfabeto, strlen(alfabeto));
    printf("\n");

    close(fd);

    return 0;
}