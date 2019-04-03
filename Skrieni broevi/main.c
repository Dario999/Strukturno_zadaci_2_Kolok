#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Од дадената датотека да се испишат на екран сите броеви со по едно празно место меѓу нив.*/
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
    char red[100],broj[20];
    int i,j=0,vobroj=0;
    while((fgets(red,100,f))>0)
    {
        for(i=0;i<strlen(red);i++)
        {
            if(isdigit(red[i]))
            {
                vobroj=1;
                broj[j]=red[i];
                j++;
            }
            else
            {
                broj[j]='\0';
                if(vobroj)
                {
                    printf("%s " , broj);
                    vobroj=0;
                }
                j=0;
            }
        }
    }
    fclose(f);
return 0;
}
