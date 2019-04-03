#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Нека е дадена влезна датотека со име „text.txt“. Да се напише програма која ќе изброи во
 колку редови од датотеката има помалку збoрови од просечниот број на зборови по ред. Во
  датотеката зборовите се составени само од алфанумерички знаци. Резултатот да се отпечати на
  стандраден излез. Максималниот број на знаци во еден ред е 80.*/
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
    int vkzborovi=0,vkredovi=0,i,vozbor=0,zbor=0;
    char red[80];
    int niza[80],vk=0,j=0;
    float prosek;
    while((fgets(red,80,f))!=NULL)
    {
        for(i=0;i<strlen(red);i++)
        {
            if(isalnum(red[i]))
            {
                vozbor=1;
            }
            else
            {
                if(vozbor)
                {
                    vozbor=0;
                    vkzborovi++;
                    zbor++;
                }
            }
        }
    niza[j]=zbor;
    zbor=0;
    j++;
    vkredovi++;
    }
    prosek=(float)vkzborovi/vkredovi;
    for(i=0;i<vkredovi;i++)
    {
        if(niza[i]<=prosek)
            vk++;
    }
    printf("%d" , vk);
fclose(f);
}

