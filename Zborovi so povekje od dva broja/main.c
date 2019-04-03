#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Да се напише програма која од влезната датотека со име „zadaca3.txt“во излезна датотека „rezultat.txt“ ќе ги ископира
сите редови текст така што пред секој ред ќе додаде уште еден ред во кој ќе стои бројот на зборови кои имаат повеќе од две цифри.
Се смета дека зборовите се составени од букви и цифри, меѓусебно разделени со произволен број на белини и специјални знаци. Во
 текстуалната датотека нема редови подолги од 100 знаци.*/
void wtf()
{
    FILE *f=fopen("zadaca3.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
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
        printf("unable to read");
        return -1;
    }
    char red[100];
    int vozbor=0,i,broevi,zborovi;
    while((fgets(red,100,in))!=NULL)
    {
        broevi=zborovi=0;
        for(i=0;i<strlen(red);i++)
        {
            if(isalnum(red[i]))
            {
                vozbor=1;
                if(isdigit(red[i]))
                {
                    broevi++;
                }
            }
            else
            {
                if(vozbor)
                {
                    if(broevi>2)
                    {
                        zborovi++;
                    }
                    broevi=0;
                }
                vozbor=0;
            }
        }
    fprintf(out,"%d\n%s" , zborovi , red);
    printf("%d\n%s" , zborovi , red);
    }
    fclose(in);
    fclose(out);
    return 0;
}
