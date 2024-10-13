//Zara Luigi
//Classe 4E
//Esercizio 10 - iterazioni
/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri interi.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//dichiarazione e innizializzazioe delle variabili
    int numero, somma = 0;
    
    //chiedo all'utente di inserire in input un numero maggiore di 1
    printf("inserisci un numero in input: ");
    scanf("%d", &numero);
    
    //controllo che il numero sia positivo
    if(numero <= 0){
        do{
            printf("il numero deve positivo!! Inserisci: ");
            scanf("%d", &numero);
        }while(numero <= 0);
    }
    
    //calcolo la somma dei numeri 
    for(int i = 1; i <= numero; i++){
        somma = somma + i;
    }
    
    //mostro in output la somma dei primi N numeri
    printf("la somma dei primi N numeri interi è: %d ", somma);

	return 0;
}