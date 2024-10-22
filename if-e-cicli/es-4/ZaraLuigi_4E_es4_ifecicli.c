//Zara Luigi
//Classe 4£
//Esercizio 4

/*
Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //dichiarazione e inizalizzazione delle variabili
    int primoValore, secondoValore;
    double radiceQuadrata;
    
    do{
        //Chiedo all'utente di inserire in input una coppia di valori
        printf("Inserisci il primo valore: ");
        scanf("%d", &primoValore);
        printf("Inserisci il secondo valore: ");
        scanf("%d", &secondoValore);
        
        //controllo
        if(primoValore < secondoValore){
            radiceQuadrata = (double)secondoValore / (double)primoValore;
        } else {
            radiceQuadrata = (double)primoValore / (double)secondoValore;
        }
        
        //se la radiceQuadrata è > 0 la calcolo
        if(radiceQuadrata > 0){
            radiceQuadrata = sqrt(radiceQuadrata);
            //mostro in output il risultato
            printf("La radice quadrata del rapporto %d/%d é %.2f\n", primoValore, secondoValore, radiceQuadrata);
        }
        
    }while(radiceQuadrata > 0);
    
    printf("Attenzione!! Non è possibili effettuare la radice quadrata di un numero negativo!");

    return 0;
}