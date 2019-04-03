#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define WORDLEN 21
#define LINELEN 81
int povekjeod2(char *w)
{
    char *c;
    int isti;
    while(*w)
    {
        c=w+1;
        isti=1;
        while(*c)
        {
            if(tolower(*w)==tolower(*c))
                isti++;
            c++;
        }
        if(isti>2)
            return 1;
        w++;
    }
return 0;
}
int main()
{
    char zbor[WORDLEN];
    FILE *f;
    int brzb=0;
    if((f=fopen("zborovi.txt" , "r"))==NULL)
    {
        printf("Ne moze da se otvori");
        return -1;
    }
    while((fgets(zbor,WORDLEN,f))!=NULL)
    {
        if(povekjeod2(zbor))
        {
            puts(zbor);
            brzb++;
        }
    }
    printf("\nVkupno %d zborivi " , brzb);
    fclose(f);
return 0;
}

