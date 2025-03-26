//Zara Luigi - Classe 4E - esercizio 1 programmazione di sistema

/**
 * Scrivere un programma concorrente che realizzi il seguente comando:
 * 
 * cat file.txt | wc 
 * il processo p2 deve rimandare l'output di wc al padre, il quale lo scriverà
 * su un file chiamato wc.txt
 * 
 * il nome del file "file.txt" deve essere passato come argomento in argv[1]
 * 
 * @param argc numero di argomenti passati da riga di comando
 * @param argv array contenetne gli argomenti passati da riga di comando
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    //variabili
    int pid, p1p2[2], p2p0[2];

    //controllo argc
    if (argc != 2)
    {
        printf("Numero argomenti sbagliato\n");
        exit(1);
    }
    
    pipe(p1p2);
    pid = fork();

    //p1 -> p2
    if (pid == 0)
    {
        close(p1p2[0]);
        close(1);
        dup(p1p2[1]);
        close(p1p2[1]);
        execl("/bin/cat", "cat", argv[1], (char *)0);
        return -1;
    }

    //p2 -> p0
    pipe(p2p0);
    pid = fork();

    if (pid == 0)
    {
        close(p1p2[1]);
        close(0);
        dup(p1p2[0]);
        close(p1p2[0]);

        close(p2p0[0]);
        close(1);
        dup(p2p0[1]);
        close(p2p0[1]);

        execl("/bin/wc", "wc", (char *)0);
        return -1;
    }

    close(p1p2[1]);
    close(p1p2[0]);
    close(p2p0[1]);

    close(0);
    close(p2p0[0]);
    close(p2p0[0]);

    close(1);
    open("wc.txt", O_WRONLY | O_CREAT, 0777);

    return 0;
}