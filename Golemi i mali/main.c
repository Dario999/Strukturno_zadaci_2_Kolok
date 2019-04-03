#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**•	Да се напише програма која на стандарден излез ќе ја оптечати содржината на дадена текстуалната датотека "text.txt".
 При печатењето, на почетокот на секој ред треба да го отпечати и односот на големи/мали букви во тој ред. Максималната должина
  на еден ред е 80 знаци. На крај треба да се отпчати и редниот број на редот со најголем однос на големи/мали букви.*/
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!= '#')
        fputc(c,f);
fclose(f);
}
int main()
{
    wtf();
    FILE *f=fopen("text.txt" , "r");
    int i,golemi=0,mali=0;
    char a[80];
    while((fgets(a,80,f))>0)
    {
        golemi=mali=0;
        for(i=0;i<strlen(a);i++)
        {
            if(isalpha(a[i]))
            {
                if(a[i]>='a' && a[i]<='z')
                    mali++;
                else
                    golemi++;
            }
        }
    printf("%.2f %s" , (float)golemi/mali , a);
    }
fclose(f);
return 0;
}
