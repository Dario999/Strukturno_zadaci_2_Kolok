#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Да се напише програма која ќе го испечати зборот со најголем број самогласки во текстуална
датотека чиешто име се задава како аргумент од командна линија заедно со бројот на самогласки во
тој збор. Еден збор може да содржи најмногу 20 знака.*/
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int samoglaska(char c)
{
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}
int main()
{
    wtf();
    FILE *f=fopen("text.txt" , "r");
    int max=0,samoglaski,i;
    char zbor[20],maxzbor[20];
    while((fscanf(f,"%s",zbor))>0)
    {
        samoglaski=0;
        for(i=0;i<strlen(zbor);i++)
        {
            if(samoglaska(zbor[i])==1)
                samoglaski++;
        }
    if(samoglaski>max)
    {
        strcpy(maxzbor,zbor);
        max=samoglaski;
    }
    }
    printf("%d\t%s" , max , maxzbor);
    fclose(f);
    return 0;
}
