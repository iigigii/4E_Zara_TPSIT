//Zara Luigi
//Classe 4E
//Esercizio 10
/*Una birreria a fine serata deve conteggiare l’incasso. La cassiera accende il 
software gestionale il quale le chiede di inserire una alla volta le consumazioni 
servite.
Le consumazioni si dividono in bevande e ristorazione. La cassiera per ogni 
consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video 
le seguenti informazioni:
1.	La media dell’incasso delle bevande 
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizalizzazione delle variabili
    char tipologia[12];
    double importo, sommaBevande = 0, sommaRistorazioni = 0; 
    double mediaIncassoBevande = 0, mediaIncassoRistorazione = 0;
    int contatoreBevande = 0, contatoreRistorazioni = 0;
    
    do{
        do{
            //chiedo all'utente di inserire in input la tipologia di consumazione
            printf("Inserisci la tipologia di consumazione: ");
            scanf("%s", tipologia);
        }while(strcmp("esci", tipologia) != 0 && strcmp(tipologia, "bevande") != 0 && strcmp(tipologia, "ristorazione") != 0);
        
        if (strcmp(tipologia, "esci") == 0) {
            break;
        }
        
        //chiedo all'utente di inserire in input l'importo della consumazione
        do{
            printf("Inserisci l'importo della consumazione: ");
            scanf("%lf", &importo);
            if(importo < 0){
                printf("l'importo non può essere negativo!! Inserisci: ");
            }
        }while(importo < 0);
        
        if(strcmp(tipologia, "bevande") == 0){
            contatoreBevande++;
            sommaBevande = sommaBevande + importo;
        }
    
        if(strcmp(tipologia, "ristorazione") == 0){
            contatoreRistorazioni++;
            sommaRistorazioni = sommaRistorazioni + importo;
        }
        
    }while(strcmp("esci", tipologia) != 0);
    
    mediaIncassoBevande = sommaBevande / (double)contatoreBevande;
    mediaIncassoRistorazione = sommaRistorazioni / (double)contatoreRistorazioni;
    
    //mostro in output i risultati
    printf("La media dell'incasso delle bevande è: %.2f\n", mediaIncassoBevande);
    printf("La media dell'incasso della ristorazio è: %.2f\n", mediaIncassoRistorazione);
    
    if(contatoreBevande > contatoreRistorazioni){
        printf("sono state vendute più bevande!");
    } else {
        printf("sono state vendute più ristorazioni!");
    }

    return 0;
}