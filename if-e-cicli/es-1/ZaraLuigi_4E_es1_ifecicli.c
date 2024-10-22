//Zara Luigi
//Classe 4E
/*
Esercizio 1
Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.
*/

#include <stdio.h>

int main()
{
    //dichiarazione delle variabili
    int primoNumero, secondoNumero;
    double rapporto;
    
    do{
        //Chiedo all'utente di inserire in input una coppia di numeri
        printf("Inserisci il primo numero: ");
        scanf("%d", &primoNumero);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &secondoNumero);
        
        //controllo
        if(primoNumero > secondoNumero){
            rapporto = (double)primoNumero / (double)secondoNumero;
        } else {
            rapporto = (double)secondoNumero / (double)primoNumero;
        }
        
        //mostro in output il risultato
        printf("il rapporto tra il valore max / min é: %.2f\n", rapporto);
        
    }while(primoNumero != 0 && secondoNumero != 0);
    
    return 0;
}