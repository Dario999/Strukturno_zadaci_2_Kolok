#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Нека е дадена влезна датотека со име „text.txt“. Да се напише програма која ќе ги отпечати на стандарден излез секој трет збор од датотеката,
 но така што буквите од зборовите да се сите мали и во зборовите буквата a и претходната буква да си ги заменат местата. Ако a се наоѓа на почеток
  на зборот, тогаш да биде со голема буква.
На пример модифициран зборот inForMatika би бил inforamtiak.
_Забелшака_: Во датотеката зборовите се составени само од алфанумерички знаци и се оделени со празно место или нов ред. Максималниот број на знаци
 во еден збор е 20.
*/
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
    int brojac=1,i;
    while((fscanf(f,"%s" , zbor))>0)
    {
        if(brojac%3==0)
        {
            brojac++;
            for(i=0;i<strlen(zbor);i++)
            {
                if(i==0 && zbor[i]=='a')
                {
                    zbor[i]=toupper(zbor[i]);
                }
                else if(zbor[i]=='a')
                {
                    char tmp;
                    tmp=zbor[i];
                    zbor[i]=zbor[i-1];
                    zbor[i-1]=tmp;
                }
                else
                {
                    zbor[i]=tolower(zbor[i]);
                }
            }
        printf("%s\n" , zbor);
        }

        else
            ++brojac;
    }
fclose(f);
return 0;
}
