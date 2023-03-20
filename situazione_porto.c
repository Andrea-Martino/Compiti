#include "lib.h"
//panoramica situazione del porto
void situazione_porto(Porto portoNA)
{
    FILE*pf2;
    pf2=fopen("porto.txt", "w");
    if(pf2==NULL){
        printf ("file relativo al porto non trovato");
        exit(EXIT_FAILURE);
    }
    portoNA.n_pontili=rand()%9+1;
    for(int i=0; i<portoNA.n_pontili; i++)
    {
        portoNA.pontili[i].numero=i+1;
        portoNA.pontili[i].st_pontile= rand()%2;
        switch (portoNA.pontili[i].st_pontile)
        {
        case 0:
            fprintf(pf2, "pontile %d LIBERO\n", i+1);
            break;
        case 1:
            fprintf(pf2, "pontile %d OCCUPATO\n", i+1);
            break;
        }
    }
    fclose(pf2);
}