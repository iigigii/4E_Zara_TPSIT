//Zara Luigi
//Classe 4E
//Fila B Verifica

//importazione librerie
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    //dichiarazione variabili
    int numero;

    //chiedeo all'utente di inserire in input un numero compreso tra 0 e 10
    printf("Inserisci un numero compreso tra 0 e 10 (estremi inclusi): ");
    scanf("%d", &numero);

    //controllo che il numero sia nel range consentito
    while(numero < 0 || numero > 10){
        printf("inserisci nuovamente: ");
        scanf("%d", &numero);   
    }

    pid_t p2 = fork();
    if(p2 == 0){
        pid_t p4 = fork();
        if(p4 == 0){
            for(int i = numero; i >= 0; i--){
                printf("%d\n", i);
            }
            exit(0);
        } else {
            pid_t p5 = fork();
            if(p5 == 0){
                for(int i = 0; i <= numero; i++){
                    printf("%d\n", i);
                }      
                exit(0);
            } else {
                
                exit(0);
            }
        }
    } else {
        pid_t p3 = fork();
        if(p3 == 0){
            printf("Numero: %d", numero);


            exit(0);
            pid_t p6 = fork();
            if(p6 == 0){
                int quadrato = numero*numero;
                exit(0);
            } else {
                wait(NULL);
                wait(0);
            }
        } else {
            //wai
        }
    }

    return 0;
}