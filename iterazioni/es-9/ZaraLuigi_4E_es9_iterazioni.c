//Zara Luigi
//Classe 4E
//Esercizio 9 - iterazioni
/*Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri interi compresi
nell'intervallo chiuso [N1,N2].*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//dichiarazione e inizializzazione delle variabili
	int numero1, numero2;

	do {
		printf("inserisci il primo numero: ");
		scanf("%d", &numero1);
	} while(numero1 < 0);

	//chiedo all'utente di inserire il secondo numero
    do{
        printf("inserisci il secondo numero: ");
	    scanf("%d", &numero2);
    }while(numero2 <= numero1);

    //genero i numeri e li mostro in output
	for(int i = numero2; i >= numero1; i--) {
		printf("%d\n", i);
	}
	
	return 0;
}