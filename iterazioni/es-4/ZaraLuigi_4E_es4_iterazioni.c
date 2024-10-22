//Zara Luigi
//Classe 4E
//Esercizio 4 - iterazioni
/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri pari minori o uguali a N.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//dichiarazione e inizializzazione delle variabili
	int numero;

	//chiedo all'utente di inserire in input un numero reale
	printf("inserisci un numero: ");
	scanf("%d", &numero);

	if(numero < 0) {
		do {
			printf("Il numero deve essere positivo!! Inserisci: ");
			scanf("%d", &numero);
		} while(numero < 0);
	}

    //genero i numeri e li mostro in output
	for(int i = 1; i <= numero; i++) {
		if(i % 2 == 0){
		    printf("%d \n", i);
		}
	}
	
	return 0;
}