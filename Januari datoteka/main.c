#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int main()
{
    wtf();
    FILE *f=fopen("text.txt" , "r");
    char zbor1[50],zbor2[50];
    int i,min,max,brojac;
    while((fscanf(f,"%s%s" , zbor1,zbor2))>0)
    {
        brojac=0;
        if(strlen(zbor1)>strlen(zbor2))
        {
            max=strlen(zbor1);
            min=strlen(zbor2);
        }
        else
        {
            max=strlen(zbor2);
            min=strlen(zbor1);
        }
        for(i=0;i<min;i++)
        {
            if(tolower(zbor1[i])!=tolower(zbor2[i]))
                brojac++;
        }
    brojac+=max-min;
    printf("%d " , brojac);
    }
    fclose(f);
    return 0;
}
