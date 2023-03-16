#include "lib.h"
void cancellaFile()
{
    FILE* pf;
    pf= fopen("test.txt", "w");
    if(!pf)
    {
        puts("File non trovato");
        exit(EXIT_FAILURE);
    }
    fclose(pf);
}