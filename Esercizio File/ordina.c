#include "lib.h"
void ordina(int velocisti[], int v, int mezzofondisti[], int m, int fondisti[], int f, int ordinati[])
{
    for (int i = 0; i < 10; i++)
    {
        if(atleti[i].special== 1)
        {
            velocisti[v]=i;
            v++;
        }else if(atleti[i].special ==2){
                mezzofondisti[m]=i;
                m++;
            }else if(atleti[i].special==3){
                    fondisti[f]=i;
                    f++;
                }
    }
    if(v>=2)
    {
        for (int i = v-1; i>0; i--)
        {
            for (int count = 0; count < i; count++)
            {
                if (atleti[velocisti[i-1]].tempo[count] <atleti[velocisti[i]].tempo[count])
                {
                    //swap
                    Atleti temp;
                    temp = atleti[velocisti[i-1]] = atleti[velocisti[i]];
                    atleti[velocisti[i-1]]= atleti[velocisti[i]];
                    atleti[velocisti[i]] =temp;
                }
            }
        }
    }
    if (m>=2)
    {
        for (int i = m-1; i>0; i--)
        {
            for (int count = 0; count < i; count++)
            {
                if (atleti[mezzofondisti[i-1]].tempo[count] <atleti[mezzofondisti[i]].tempo[count])
                {
                    //swap
                    Atleti temp;
                    temp = atleti[mezzofondisti[i-1]] = atleti[mezzofondisti[i]];
                    atleti[mezzofondisti[i-1]]= atleti[mezzofondisti[i]];
                    atleti[mezzofondisti[i]] =temp;
                }
            }
        }
    }
    if (f>=2)
    {
        for (int i = f-1; i>0; i--)
        {
            for (int count = 0; count < i; count++)
            {
                if (atleti[fondisti[i-1]].tempo[count] <atleti[fondisti[i]].tempo[count])
                {
                    //swap
                    Atleti temp;
                    temp = atleti[fondisti[i-1]] = atleti[fondisti[i]];
                    atleti[fondisti[i-1]]= atleti[fondisti[i]];
                    atleti[fondisti[i]] =temp;
                }
            }
        }
    }
    int j = 0;
    int i = 0;
    for(i=0; i<v; i++, j++){
        ordinati[j] = velocisti[i];
    }
    for(i=0; i<m; i++, j++){
        ordinati[j] = mezzofondisti[i];
    }
    for(i=0; i<f; i++, j++){
        ordinati[j] = fondisti[i];
    }
}