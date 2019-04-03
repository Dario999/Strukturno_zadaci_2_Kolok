#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void wtf()
{
    FILE *f=fopen("vlez.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int main()
{
    wtf();
    FILE *f=fopen("vlez.txt" , "r");
    char zbor[20];
    int i,flag,vk=0;
    while((fscanf(f,"%s",zbor))>0)
    {
        flag=0;
        for(i=0;i<strlen(zbor)-1;i++)
        {
            if(zbor[i]=='0' && zbor[i+1]=='x')
            {
                flag=1;
                vk++;
                break;
            }
        }
    if(flag)
        printf("%s\n" , zbor);
    }
    printf("Vkupno: %d" , vk);
    fclose(f);
return 0;
}
