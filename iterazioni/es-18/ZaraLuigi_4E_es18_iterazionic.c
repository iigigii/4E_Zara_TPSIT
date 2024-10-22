//Zara Luigi
//Classe 4E
//Esercizio 18 - iterazioni
/*Data una misura di tempo espressa in secondi S1, convertirla in ore H,
minuti M e secondi S.

Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
dal programma, 0h 27m 10s.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//dichiarazione e innizializzazioe delle variabili
    int S1, ore, minuti, secondi;
    
    //chiedo all'utente di inserire in input un una misura di tempo
    printf("inserisci una misura di tempo (in secondi) in input: ");
    scanf("%d", &S1);

    //controllo che S1 sia maggiore di 0
    while(S1 <= 0){
        printf("la misura di tempo on può essere negativa!! Inserisci nuovamente: ");
        scanf("%d", &S1);
    }
    
    minuti = S1 / 60;
    secondi = S1 % 60;
    ore = minuti / 60;
    minuti = minuti % 60;
    
    //mostro in output il tempo espresso in H - M - S
    printf("%dh %dm %ds", ore, minuti, secondi);

	return 0;
}