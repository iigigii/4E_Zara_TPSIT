//Zara Luigi
//Classe 4E
//Esercizio 1 - iterazioni
/*Dato N un numero intero positivo, generare e visualizzare il numero 
successivo.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizializzazione delle variabili
    int numero, numeroIterato;
    
    //chiedo all'utente di inserire in input un numero reale
    printf("inserisci un numero: ");
    scanf("%d", &numero);
    
    if(numero < 0){
        do{
            printf("Il numero deve essere positivo!! Inserisci: ");
            scanf("%d", &numero);
        }while(numero < 0);
    }
    
    numeroIterato = numero + 1;
    
    //mostro in output
    printf("Il numero successivo di %d è %d", numero, numeroIterato);
    
    return 0;
}