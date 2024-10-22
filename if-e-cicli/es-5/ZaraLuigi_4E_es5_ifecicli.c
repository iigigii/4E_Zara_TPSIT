//Zara Luigi
//Classe 4£
//Esercizio 5

/*
Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera una serie di terne di valori interi A ,
  B e C finchè non vengono inseriti dei valori tali per cui A + B < C
• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
• prima di terminare, visualizzi il valore dei valori conteggiati
*/

#include <stdio.h>

int main()
{
    //dichiarazione e inizalizzazione delle variabili
    int primoValore, secondoValore, terzoValore;
    int differenza, valoriNulli = 0, pari = 0, dispari = 0;

    do{
        //Chiedo all'utente di inserire in input una terna di valori
        printf("Inserisci il primo valore: ");
        scanf("%d", &primoValore);
        printf("Inserisci il secondo valore: ");
        scanf("%d", &secondoValore);
        printf("Inserisci il terzo valore: ");
        scanf("%d", &terzoValore);
        
        //testo a capo
        printf("\n");
        
        //calcola la differenza tra A e B
        differenza = primoValore - secondoValore;
        
        //conteggio numero di volti in cui la differenza tra A e B è nulla
        if(differenza == 0){
            valoriNulli++;
        }
        
        //conteggio numero di volti in cui la differenza tra A e B è pari e dispari
        if(differenza % 2 == 0){
            pari++;
        } else {
            dispari++;
        }
        
    }while(primoValore + secondoValore >= terzoValore);
    
    //mostro in output i risultati
    printf("[a] - nulli: %d\n", valoriNulli);
    printf("[b] - pari: %d\n", pari);
    printf("[c] - dispari: %d\n", dispari);

    return 0;
}