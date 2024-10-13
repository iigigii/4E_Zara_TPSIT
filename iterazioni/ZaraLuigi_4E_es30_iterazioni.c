//Zara Luigi
//Classe 4E
//Esercizio 30 - iterazioni
/*Dati due numeri interi positivi N1 e N2, verificare se N1 è il quadrato 
di N2.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//dichiarazione e innizializzazioe delle variabili
    int numero1, numero2;
    
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
    
    //verifico se N1 è il quadrato di N2
    if(numero1 == numero2 * numero2){
        printf("%d è il quadrato di %d \n", numero1, numero2);
    } else {
        printf("%d NON è il quadrato di %d \n", numero1, numero2);
    }
    
	return 0;
}