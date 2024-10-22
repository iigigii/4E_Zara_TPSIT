// //Zara Luigi
//Classe 4E
//Esercizio 8 - iterazioni
/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/

#include <stdio.h> 

int main()
{
    //dichiarazione e innizializzazioe delle variabili
    int numero;
    
    //chiedo all'utente di inserire in input un numero maggiore di 1
    printf("inserisci un numero in input: ");
    scanf("%d", &numero);
    
    
    if(numero <= 0){
        do{
            printf("il numero deve positivo!! Inserisci: ");
            scanf("%d", &numero);
        }while(numero <= 0);
    }
    
    printf("I numeri in ordine decrescente sono:\n");
    for(int i = numero; i > 0; i--){
        printf("%d \n", i);
    }

    return 0;
}