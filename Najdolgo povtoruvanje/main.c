#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**•	Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со надолго последователно
 повторување на еден ист знак и ќе го отпечати на стандарден излез тој број, како и редот во кој е најден. Максималната
  должина на еден ред е 80 знаци.*/
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
    char a[80],b[80];
    int max=0,i;
    while((fgets(a,80,f))>0)
    {
        int pov=0,flag=1;
        for(i=0;i<strlen(a);i++)
        {
            if(flag)
            {
                flag=0;
                pov++;
            }
            else
            {
                if(a[i]==a[i-1])
                {
                    pov++;
                }
                else
                {
                    flag=1;
                    if(pov>max)
                    {
                        strcpy(b,a);
                        max=pov;
                    }
                    pov=0;
                    i--;
                }
            }
        }
    }
printf("%d\n%s" , max , b);
fclose(f);
return 0;
}
