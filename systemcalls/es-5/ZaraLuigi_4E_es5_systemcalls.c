//Zara Luigi
//Zara Luigi - 4E

/*
Si vuole realizzare in linguaggio C un software monoprocesso che implementi il seguente comando:
$ cat file1.txt file2.txt file3.txt /tmp/file4.txt | grep “c”

Dove file[N].txt con N maggiore uguale a 1 sono una serie di files scelti dall'utente e il carattere
"c" è a scopo esemplificativo e potrebbe essere qualsiasi carattere.

Si utilizzino le system call al fine di leggere tutti i file di testo e, per ogni file, ricercare il carattere.
Al termine dell’esecuzione il software dovrà mostrare a video il numero di occorrenze trovate nei files e
dovrà contemporaneamente scrivere l’output su un file di testo il cui path sarà letto da argv.

Esempio:
$ ./a.out file1.txt file2.txt file3.txt k occorrenze.txt
$ Il carattere k compare 10 volte nei files: file1.txt, file2.txt, file3.txt
$ cat occorrenze.txt
$ Il carattere k compare 10 volte nei files: file1.txt, file2.txt, file3.txt

Esempio:
$ ./a.out file1.txt file2.txt file3.txt /tmp/file3.txt q /tmp/occorrenze.txt                                                                     
$ Il carattere q compare 18 volte nei files: file1.txt file2.txt file3.txt /tmp/file3.txt 
$ cat /tmp/occorrenze.txt                                                                                             
$ Il carattere q compare 18 volte nei files: file1.txt file2.txt file3.txt /tmp/file3.txt

Osservazioni:
essendo il software monoprocesso non è necessario usare le pipe
prestare attenzione all’uso corretto di argv
si ricorda che il software deve funzionare per un numero arbitrario di files di input.
i percorsi dei files possono essere sia assoluti che relativi 

Suggerimento:
Per facilitare la ricerca è possibile leggere un singolo carattere per volta usando la funzione read.
Utilizzare la funzione strcat per concatenare due stringhe.
*/

//importazione librerie
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

//funzione che calcola la lunghezza dei file
int calcolaLunghezzaFile(int argc, char * argv[]){
    int dimensione = 0;

    for(int i = 0; i < argc -2; i++){ //-2 perche i files si trovano negli argomenti 0 - 1 -2 
        dimensione = dimensione + strlen(argv[i]);
    }

    return dimensione;
}

//funzione che scrive la stringa
void scriviStringa(int argc, char * argv[],  char stringaFinale[]){
    for(int i = 0; i < argc - 2; i++){
        strcat(stringaFinale, argv[i]);
        strcat(stringaFinale, " ");
    }

    printf("stringaFinale");
}

//funzione main
int main (int argc, char *argv[]){
    
    //dichiarazione e inizializzazione delle variabili
    int fd;

    //Controllo argomenti (4)
    if(argc < 4){
        printf("Il numero di argomenti è errato\n");
        exit(0);
    }

    //invoco la funzione calcolaLunghezzaFile
    int dimensione = calcolaLunghezzaFile(argc, argv);

    //invoco la funzione che compone la stringa
    
    


































    for(int i = 0; i < argc -  2; i++){
        fd = open(argv[i], O_RDONLY);

    }
    





























































































    

































    




































   






    return 0;
}