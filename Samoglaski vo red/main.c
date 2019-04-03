#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int samoglaska(char c)
{
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    else
        return 0;
}
int main()
{
    int red=0,vkupno=0;
    FILE *dat;
    char c;
    if((dat=fopen("KRSPrimer.txt" , "r"))==NULL)
    {
        printf("Ne moze da se otvori");
        return -1;
    }
    int samoglaski=0;
    while((c=fgetc(dat))!=EOF)
    {
        if(samoglaska(c))
        {
            ++samoglaski;
            ++vkupno;
        }
        if(c=='\n')
        {
            if(samoglaski>10)
            {
                red++;
            }
            samoglaski=0;
        }
    printf("Vkupno %d reda sto imaat povekje od 10 samoglaski\n" , red);
    printf("Vo datotekata ima vkupno %d samoglaskim\n" , vkupno);
    }
}
