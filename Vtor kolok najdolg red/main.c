#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void wtf()
{
    FILE *f=fopen("vlezna.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int main()
{
    wtf();
    FILE *f=fopen("vlezna.txt" , "r");
    char red[80],max[80];
    int znak,bukva,broj,maxznaci=0,znaci,i;
    while((fgets(red,80,f))>0)
    {
        znak=bukva=broj=znaci=0;
        for(i=0;i<strlen(red);i++)
        {
            if(isdigit(red[i]))
            {
                broj++;
                znaci++;
            }
            if(isalpha(red[i]))
            {
                bukva++;
                znaci++;
            }
            if(ispunct(red[i]))
            {
                znak++;
                znaci++;
            }
        }
    if(broj!=0 && bukva!=0 && znak!=0)
    {
        if(znaci>maxznaci)
        {
            strcpy(max,red);
            maxznaci=znaci;
        }
    }
    }
    printf("%s" , max);
    fclose(f);
    return 0;
}
