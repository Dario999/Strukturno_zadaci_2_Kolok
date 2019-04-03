#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Да се напише програма која во датотеката со име „zadaca3.txt“, ќе го пронајде редот во кој
има најголем број зборови кои содржат непарен број согласки. Во излезната датотека со име
„rezultat.txt“ да се испечати тој ред. Доколку во датотеката има повеќе вакви редови (со ист
број вакви зборови), да се пријави првиот. Се смета дека зборовите се составени само од букви и меѓусебно се разделени
со произволен број на белини, специјални знаци и цифри. Во текстуалната датотека нема редови подолги од 100 знаци.*/
void wtf()
{
    FILE *f=fopen("zadaca3.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int soglaska(char c)
{
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return 0;
    else
        return 1;
}
int main()
{
    wtf();
    FILE *in,*out;
    if((in=fopen("zadaca3.txt" , "r"))==NULL)
    {
        printf("unable to read");
        return -1;
    }
    if((out=fopen("rezultat.txt" , "w"))==NULL)
    {
        printf("unable to write");
        return -1;
    }
    char red[100],maxred[100],zbor[20];
    int max=0,zborovi=0,soglaski,vozbor=0,i;
    while((fgets(red,100,in))!=NULL)
    {
        soglaski=zborovi=0;
        for(i=0;i<strlen(red);i++)
        {
            if(isalpha(red[i]))
            {
                vozbor=1;
                if(soglaska(red[i]))
                {
                    soglaski++;
                }
            }
            else
            {
                if(vozbor)
                {
                    if(soglaski%2)
                    {
                        zborovi++;
                    }
                    soglaski=0;
                    vozbor=0;
                }
            }
        }
        if(zborovi>max)
        {
            strcpy(maxred,red);
            max=zborovi;
        }
    }
    fprintf(out,"%s",maxred);
    printf("%s" , maxred);
fclose(in);
fclose(out);
return 0;
}


