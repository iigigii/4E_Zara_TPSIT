//Zara Luigi
//Classe 4E
//es-4 fork

//importazione librerie
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
* @brief Scriva un programma in linguaggio C che dato un array prestabilito, prenda in input da
* riga di comando un numero e lo ricerchi all'interno dell'array.
* La ricerca deve essere demandata ad un processo figlio e deve essere
* implementata attraverso un'apposita funzione di nome "ricerca".
*
* @param argc Numero di argomenti da riga di comando (non utilizzato).
* @param argv Array di stringhe contenente gli argomenti da riga di comando (non utilizzato).
*
* @return Restituisce 0 se l'esecuzione del programma e' andata a buon fine.
*/
int main (int argc, char *argv[]){
    //istanzio un array prestabilito
    int array[] = {2, 4, 6, 8, 10};

    //dichiarazione e inizializzazione pid
    int pid = fork();

    if(pid < 0){
        printf("attenzione! errore nella fork");
    }

    //chiedo all'utente di F.I un numero da cercare 
    printf("Inserisci un numero da cercare all'interno dell'array: \n");
    int numero = atoi(argv[1]);

    if(pid == 0){ //processo figlio
        
        exit(1);
    } else { //processo padre
        wait(&pid);
    }




    return 0;
}