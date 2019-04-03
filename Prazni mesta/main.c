#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**•	Да се напише програма која на стандарден излез ќе ја оптечати содржината на дадена текстуалната датотека "text.txt".
При печатењето, на почетокот на секој ред треба да го отпечати и односот на празни_места/букви во тој ред. Максималната должина
на еден ред е 80 знаци. На крај треба да се отпчати и редниот број на редот со најмал однос на празни_места/букви..*/
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
    int i,mesta=0,bukvi=0;
    char a[80];
    while((fgets(a,80,f))>0)
    {
        mesta=bukvi=0;
        for(i=0;i<strlen(a);i++)
        {
            if(isspace(a[i]))
                mesta++;
            else
                bukvi++;
        }
    printf("%.2f %s" , (float)(mesta-1)/bukvi , a);
    }
fclose(f);
return 0;
}
