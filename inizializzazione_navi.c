#include "lib.h"
void inizializzazione_navi(Porto portoNA)
{
    FILE* pf;
    pf = fopen("navi.txt", "w");
    if(!pf) {
        printf("file non trovato");
        exit(EXIT_FAILURE);
    }
    printf("inserisci i nomi delle 5 navi che arrivano al porto (max %d caratteri) termina con Ctrl+D\n", 15 - 1);
    for (int i = 0; i < 5; i++) {
        fgets(portoNA.coda_navi[i].nave, 15, stdin);
        portoNA.navi_in_coda++;
    }
    for (int i = 0; i < N_PONTILI && i < 5; i++) {
        //portoNA.pontili[i].nave_attraccata = nave[i];
        fprintf(pf, "%s\n", portoNA.coda_navi[i].nave);
        
    }
    fclose(pf);
    // Lettura del file
    pf = fopen("navi.txt", "r");
    
    if(pf == NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    
    for (int i=0; i<5; i++)
    {
        fgets(portoNA.coda_navi[i].nave, 15, stdin);
    }
    fclose(pf);
    //for (int i=0; i<5; i++) {printf ("%s", portoNA.coda_navi[i].nave);}
}

