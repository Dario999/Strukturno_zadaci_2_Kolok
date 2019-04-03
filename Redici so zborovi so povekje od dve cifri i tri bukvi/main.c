#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Да се напише програма која од влезната датотека со име „zadaca3.txt“ во излезната датотека „rezultat.txt“ ќе
ги копира оние редови во кои се јавува барем еден збор кој содржи најмалку 2 цифри и 3 букви. Се смета дека зборовите
 се составени од букви и цифри меѓусебно разделени со произволен број на белини и специјални знаци. Во текстуалната
 датотека нема редови подолги од 100 знаци.*/
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
        printf("unable to write");
        return -1;
    }
    char red[100];
    int i,cifri,bukvi,vozbor=0,flag;
    while((fgets(red,100,in))!=NULL)
    {
        bukvi=cifri=flag=0;
        for(i=0;i<strlen(red);i++)
        {
            if(isalnum(red[i]))
            {
                vozbor=1;
                if(isdigit(red[i]))
                    cifri++;
                if(isalnum(red[i]))
                    bukvi++;
            }
            else
            {
                if(vozbor)
                {
                    if(cifri>2 && bukvi>3)
                    {
                        flag=1;
                    }
                }
                vozbor=0;
            }
        }
    if(flag)
    {
        fprintf(out,"%s" , red);
        printf("%s" , red);
    }
    }
fclose(in);
fclose(out);
return 0;
}
