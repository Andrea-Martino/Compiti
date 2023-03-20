#include "lib.h"
//sistemazione delle navi (fare un file di stampa finale   )
void verifica_posto(Porto portoNA)
{
    for (int i = 0; i < portoNA.navi_in_coda; i++)
    {
        if(portoNA.pontili[i].st_pontile==0)
        {
            portoNA.coda_navi[i].st_nave=4;
            portoNA.pontili[i].st_pontile=1;
            portoNA.coda_navi[i].n_pontile_assegnato=i+1;
        }else if(portoNA.pontili[i].st_pontile==1)
            {
                portoNA.coda_navi[i].st_nave=1;
            }
    }
    char risposta;
    printf("fai uscire una nave dal porto (s/n)\n");
    scanf("%c", &risposta);
    if(risposta=='s')
    {
            printf("PORTO BLOCCATO\n");
            printf("nave stato: MANOVRA\n");
            printf("PORTO DISPONIBILE\n");
    }
    else
    {
        printf("Nessuna nave uscirà dal porto\n");
    }    
}