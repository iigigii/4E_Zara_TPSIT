//Zara Luigi
//Classe 4E
//Esercizio 14 - iterazioni
/*Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//dichiarazione e innizializzazioe delle variabili
    int numero1, numero2, somma = 0;
    
    //chiedo all'utente di inserire in input un numero maggiore di 1
    printf("inserisci il primo numero in input: ");
    scanf("%d", &numero1);
    
    //chiedo all'utente di inserire in input un numero maggiore di 1
    printf("inserisci il secondo numero in input: ");
    scanf("%d", &numero2);
    
    //controllo che i numero siano positivi
    while(numero1 <= 0 || numero2 <= 0){
        printf("entrambi i numeri devono essere positivi!!!");
        
        printf("inserisci il primo numero positivo ");
        scanf("%d", &numero1);
        printf("inserisci il secondo numero positivo ");
        scanf("%d", &numero2);
    }
    
    //calcolo la somma dei numeri 
    for(int i = 1; i <= numero2; i++){
        somma = somma + numero1;
    }
    
    //mostro in output il prodotto utilizzando la somma ripetuta
    printf("Il prodotto di %d e %d utilizzando la somma ripetuta è: %d ", numero1, numero2, somma);

	return 0;
}