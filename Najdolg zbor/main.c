#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**•	Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со најдолгиот збор и на стандарден
излез ќе ја отпечати должината на тој збор, како и содржината на редот во кој е најден. Максималната должина на еден ред е
80 знаци. Зборовите се одделени со едно или повеќе празни места. Ако зборот се наоѓа на крајот од редот разделен е со знак за нов ред \n.*/
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
    int maxx=0;
    while((fgets(a,80,f))>0)
    {
        int i,max=0;
        for(i=0;i<strlen(a);i++)
        {
            if(isalpha(a[i]))
            {
                max++;
            }
            else
            {
                if(max>maxx)
                {
                    strcpy(b,a);
                    maxx=max;
                }
                max=0;
            }
        }
    }
    printf("%d\n%s" , maxx , b);
fclose(f);
return 0;
}
