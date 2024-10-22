//Zara Luigi
//Classe 4£
//Esercizio 2

/*
Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
- per ogni coppia di numeri letti:
• calcoli il prodotto dei due numeri e ne stampi il valore
• sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma
*/

#include <stdio.h>

int main()
{
    //dichiarazione e inizalizzazione delle variabili
    int primoValore, secondoValore;
    int somma = 0, prodotto;
    
    do{
        //Chiedo all'utente di inserire in input una coppia di valori
        printf("Inserisci il primo valore: ");
        scanf("%d", &primoValore);
        printf("Inserisci il secondo valore: ");
        scanf("%d", &secondoValore);
        
        //calcolo il prodotto dei due valori
        prodotto = primoValore * secondoValore;
        printf("Il prodotto di %d * %d é: %d \n", primoValore, secondoValore, prodotto);
        
        somma = somma + prodotto;
        
    }while(primoValore != 0 && secondoValore != 0);

    //srampo in output la somma di tutti i prodotti
    printf("La somma di tutti i prodotti è: %d", somma);
    
    return 0;
}