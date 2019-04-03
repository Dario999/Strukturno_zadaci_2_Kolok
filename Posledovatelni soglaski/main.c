#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**Последователни согласки Задача 3 (0 / 0)
•Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со најголем број последователни
 повторувања на согласки и ќе го отпечати на стандарден излез тој број, како и соржината на редот во кој е најден.
Максималната должина на еден ред е 80 знаци.
Пример влез
I know someday you'll have a beautiful life,
I know you'll be a star in somebody else's sky,
But why, why, why can't it be, can't it be mine?
Пример излез
11
But why, why, why can't it be, can't it be mine?
*/
void wtf()
{
    FILE *f=fopen("text.txt" ,"w");
    char c;
    while((c=getchar())!='EOF')
    {
        fputc(c,f);
    }
fclose(f);
}
int soglaska(int c)
{
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 0;
    else
        return 1;
}
int main()
{
    wtf();
    FILE *f;
    if((f=fopen("text.txt" , "r"))==NULL)
    {
        printf("unable to read");
        return -1;
    }
    int pov=0,maxpov=0;
    char red[80],maxred[80];
    while((fgets(red,80,f))>0)
    {
        int i,len=strlen(red);
        for(i=0;i<len;i++)
        {
            if(isalpha(red[i]))
            {
                if(soglaska(red[i]))
                {
                    pov++;
                }
                else
                {
                    if(pov>maxpov)
                    {
                        strcpy(maxred,red);
                        maxpov=pov;
                    }
                    pov=0;
                }
            }
        }
    }
    printf("%d\n" , maxpov);
    printf("%s" , maxred);
fclose(f);
return 0;
}
