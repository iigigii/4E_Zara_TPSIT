//Zara Luigi
//Classe 4E
//Esercizio 22 - iterazioni
/*Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
danno per somma il numero stesso. Non considerare la proprietà commutativa.*/

#include <stdio.h>

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
    
    //output
    printf("Le coppie di numeri minori di %d che danno come somma %d sono:\n", numero, numero);
    
    //ciclo per trovare la coppia di valori
    for(int i = 1; i < numero; i++){
        int j = numero - i; //trovo il 2* numero
        if(j < numero){
            printf("(%d + %d) \n", i , j);
        }
    }

	return 0;
}