//Zara Luigi
//Classe 4£
//Esercizio 6

/*
Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
  quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.
*/

#include <stdio.h>

int main()
{
    //dichiarazione e inizalizzazione delle variabili
    int primoValore, secondoValore, valore;
    int i = 0, somma = 0;
    double mediaValori;
    
    //Chiedo all'utente di inserire in input una coppia di valori con A < B
    printf("Inserisci il valore di A: ");
    scanf("%d", &primoValore);
    printf("Inserisci il valore di B: ");
    scanf("%d", &secondoValore);
    
    //controllo che l'utente A sia minore di B
    while(primoValore >= secondoValore){
        
        printf("A deve essere minore di B! \n");
        printf("Inserisci nuovamente il valore di A: ");
        scanf("%d", &primoValore);
        printf("Inserisci nuovamente il valore di B: ");
        scanf("%d", &secondoValore);
    }

    do{
        //chiedo all'utente di inserie in input un valore
        printf("Inserisci un valore: ");
        scanf("%d", &valore);
        
        //controllo che il valore letto sia al fuori dell’intervallo [A, B]
        if(valore >= primoValore && valore <= secondoValore ){
            somma = somma + valore;
            i++;
        }
    
    }while(valore >= primoValore && valore <= secondoValore);
    
    //mostro in output i risultati
    if(i > 0){
        mediaValori = (double)somma / (double)i;
        printf("La media dei valori non letti è: %.2f", mediaValori);
    }
    
    return 0;
}