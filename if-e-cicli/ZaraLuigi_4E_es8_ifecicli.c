//Zara Luigi
//Classe 4E
//Esercizio 8

/*
Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente, con N inserito in input. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizializzazione delle variabili
    int qtaNumeri, numeri;
    double somma;

    //chiedo all'utente di inserire la qtaNumeri di cui desidera calcolare la somma delle radici quadrate
    printf("Inserisci la quantità di numeri di cui desideri calcolare la somma delle radici quadrate: ");
    scanf("%d", &qtaNumeri);
    
    //controllo che la quantià di numeri non sia negativa
    while(qtaNumeri < 0){
        printf("la quantità di numeri da inserire non può essere negativa \n");
        printf("Inserisci nuovamente la quantità di numeri: ");
        scanf("%d", &qtaNumeri);
    }

    //istanzio un vettore di interi
    int vettoreNumeri[qtaNumeri];
    
    //popolo il vettore 
    for(int i = 0; i < qtaNumeri; i++){
        printf("Inserisci il %d° numero: ", (i+1));
        scanf("%d", &vettoreNumeri[i]);
        
        if(vettoreNumeri[i] > 0){
            somma = somma + sqrt(vettoreNumeri[i]);
        } else {
            printf("Hai inserito un numero negativo\n");
            break;
        }
    }

    //mostro in output il risultato della somma
    printf("La somma è: %f", somma);
    
    return 0;
}