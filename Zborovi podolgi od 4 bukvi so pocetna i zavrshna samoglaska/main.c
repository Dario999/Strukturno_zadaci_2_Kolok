#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Да се напише програма која за дадена текстуална датотека ќе ги изброи и отпечати зборовите подолги
 од 4 букви кои почнуваат и завршуваат на самогласка. Да не се прави разлика меѓу големи и мали букви.
 Зборовите се составени само од букви, а меѓусебно се одвоени со најмалку еден специјален знак, цифра или
 празно место. Името на влезната датотека се задава од командна линија, а доколку не е зададено да се отпечати
  начин на употреба на програмата. Во датотеката нема зборови подолги од 15 букви.*/
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
    else
        return 0;
}
int main()
{
    wtf();
    FILE *f=fopen("text.txt" , "r");
    int brojac=0;
    char zbor[15];
    while((fscanf(f,"%s" ,zbor))!=NULL)
    {
            if(strlen(zbor)>4 && samoglaska(zbor[0])==1 && samoglaska(zbor[strlen(zbor)-1])==1)
            {
                printf("%s\n" , zbor);
                brojac++;
            }
    }
    printf("%d" , brojac);
    fclose(f);
    return 0;
}
