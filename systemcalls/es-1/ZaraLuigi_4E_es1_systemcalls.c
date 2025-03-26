//Zara Luigi - 4E - 11/12/2024

/*
Utilizzando le system call open, read, write, close leggere il file rfc1918.txt e stamparlo a video.
Il programa deve essere cosi invocato:
$./a.out rfc1918.txt

Consiglio: leggere un carratere per volta 
*/

//importazione librerie
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    /*
    f(argc != 2){
        printf("numero di argomenti errato \n");
        exit(1);
    }*/

    int fd = open(argv[1], O_RDONLY);

    char buf;

    int nread;

    while(nread){
        read(fd, &buf, sizeof(buf));
        write(1, &buf, 1);
    }










    return 0;
}