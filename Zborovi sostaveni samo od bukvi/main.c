#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Една текстуална датотека (името се чита од командна линија)
 содржи зборови кои се сотавени од алфа-нумерички знаци. Да се избројат зборовите кои се составени само од букви.*/
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
    char zbor[20];
    int brojac=0,i,flag;
    while((fscanf(f,"%s" , zbor))>0)
    {
        flag=1;
        for(i=0;i<strlen(zbor);i++)
        {
            if(!isalpha(zbor[i]))
                flag=0;
        }
    if(flag)
    {
        printf("%s " , zbor);
        brojac++;
    }
    }
    printf("%d" , brojac);
    fclose(f);
    return 0;
}
