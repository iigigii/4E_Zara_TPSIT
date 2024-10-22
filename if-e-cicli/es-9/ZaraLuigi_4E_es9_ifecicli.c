//Zara Luigi
//Classe 4E
//Esercizio 9
/*Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizalizzazione delle variabili
    int primoValore, secondoValore, terzoValore;
    int minNumeri, maxNumeri, ternaCorretta = 1;
    
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
        
        //controllo che la terna rispecchi: A < B < C
        if(primoValore < secondoValore && secondoValore < terzoValore){
            if(ternaCorretta){
                minNumeri = primoValore;
                maxNumeri = terzoValore;
                ternaCorretta = 0;
            }
            
            //aggiorno il valore minimo
            if(primoValore < minNumeri)
                minNumeri = primoValore;
            if(secondoValore < minNumeri)
                minNumeri = secondoValore;
            if(terzoValore < minNumeri)
                minNumeri = terzoValore;
            
            //aggiorno il valore massimo
            if(primoValore > maxNumeri)
                maxNumeri = primoValore;
            if(secondoValore >maxNumeri)
                maxNumeri = secondoValore;
            if(terzoValore> maxNumeri)
                maxNumeri = terzoValore;
                
        } else {
            printf("La seguente terna di valori non è valida! \n");
        }
        
    }while(primoValore >= 0 && secondoValore >= 0 && terzoValore>= 0);
    
    //mostro in output i risultati
    printf("il valori massimo è %d", maxNumeri);
    printf("il valore minimo è %d", minNumeri);

    return 0;
}