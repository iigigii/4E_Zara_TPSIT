//Zara Luigi
//Classe 4E
//Esercizio 7 - iterazioni
/* Dato N un numero intero positivo maggiore di 1, generare e
visssualizarre il numero precedente*/

#include <stdio.h> 

int main()
{
    //dichiarazione e innizializzazioe delle variabili
    int numero, numeroPrecedente;
    
    //chiedo all'utente di inserire in input un numero maggiore di 1
    printf("inserisci un numero in input (maggiore di 1) : ");
    scanf("%d", &numero);
    
    
    if(numero <= 1){
        do{
            printf("il numero deve maggiore di 1!! Inserisci: ");
            scanf("%d", &numero);
        }while(numero <= 1);
    }
    
    numeroPrecedente = numero - 1;
    
    printf("il numero precedente di %d è %d: ", numero, numeroPrecedente);
    

    return 0;
}