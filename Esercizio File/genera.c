#include "lib.h"
void genera(int i)
{
    atleti[i].anagrafica.anno = rand()% (2013 - 1970) +1970;    //eta
    for(int j=0; j<15-1; j++)
    {
        atleti[i].anagrafica.nome[j] = rand ()% (122 - 97) +97; //nome
        atleti[i].anagrafica.cognome[j] = rand ()% (122 - 97) +97;  //cognome 
    }
    atleti[i].corsia = rand()% (9 -1) +1;    // corsia 
    atleti[i].special = rand()% (3+0) +1;    //specialita 
    for (int j = 0; j < 5; j++)
    {
        atleti[i].tempo[j] = rand()% (80+30) +30; 
        float temp = rand()% (60+0) +0;
        temp/= 100; 
        atleti[i].tempo[j] += temp;
    }

}