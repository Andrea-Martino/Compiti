#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef enum{
    VELOCISTI =1, 
    MEZZOFONDO, 
    FONDISTI    
}SPECIALITA;

typedef struct{
    char nome[15];
    char cognome[15];
    int anno;
}Anagrafica;

typedef struct{
    Anagrafica anagrafica;
    float tempo[5];
    int corsia;
    SPECIALITA special;
}Atleti;
Atleti atleti[10];
void cancellaFile();
void genera(int );
void ordina(int [], int, int [], int, int [], int, int []);
void stampaFile(int []);