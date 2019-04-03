#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Да се напише програма која за дадена тексутална датотека на екран ќе ги испечати
редните броеив на редовите во датотеката кои имаат повеќе од 20 цифри. Името на датотеката
се задава како параметар од командна линија.*/
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
    int niza[50],vkred=0,brojac,i,j=0,br=0;
    char red[100];
    while((fgets(red,100,f))!=NULL)
    {
        brojac=0;
        for(i=0;i<strlen(red);i++)
        {
            if(isdigit(red[i]))
            {
                brojac++;
            }
        }
    ++vkred;
    if(brojac>20)
    {
        niza[j]=vkred;
        j++;
        br++;
    }
    }
    for(i=0;i<br;i++)
    {
        printf("%d\n",niza[i]);
    }
    return 0;
}
