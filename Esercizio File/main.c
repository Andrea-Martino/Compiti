#include "lib.h"
int main()
{
    int velocisti[10], mezzofondisti[10], fondisti[10];;
    int v=0, m=0, f=0, i;
    cancellaFile();
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        genera(i);
    }
    int ordinati[10];
    ordina(velocisti, v, mezzofondisti, m, fondisti, f, ordinati);

    
    stampaFile(ordinati);
}