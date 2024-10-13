//Zara Luigi
//Classe 4E
//Esercizio 21 - iterazioni
/*Dato un numero intero positivo N verificare se N è un numero primo.*/

#include <stdio.h>
#include <stdbool.h>

bool IsNumeroPrimo(int numero){
    if(numero <= 1){
        return false; //i numeri che sono minori di 1 non sono primi
    }
    
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return false;
        }
    }
    
    return true;
}

int main(int argc, char *argv[])
{
	//dichiarazione e innizializzazioe delle variabili
    int numero;
    
    //chiedo all'utente di inserire in input un una misura di tempo
    printf("inserisci un mumero: ");
    scanf("%d", &numero);

    //controllo che il numero sia positivo
    while(numero <= 0){
        printf("Il numero deve essere positivo!!!! inserisci un nuovo numero: ");
        scanf("%d", &numero);
    }
    
   //invoco la funzione IsNumeroPrimo
   if(IsNumeroPrimo(numero)){
       printf("%d è un numero primo", numero);
   } else {
       printf("%d NON è un numero primo", numero);
   }
   
	return 0;
}