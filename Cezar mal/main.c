#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Да се напише програма која соржината на текстуалната датотека "text.txt" ќе ја оптечати шифрирано на стандарден излез.
 Шифрирањето на датотеката се одвива со применување на следната формула на секоја мала буква во датотеката:
(int)'a' + (ASCII_кодот_на_малата_буква + должината_на_редот_во_кој_се_наоѓа % 26) % 26
Максималната должина на еден ред е 80 знаци.
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
    char c,red[80];
    int i;
    FILE *in;
    in = fopen("text.txt","r");
    while((fgets(red,80,in))>0)
    {
        for(i=0; i<strlen(red); i++)
        {
            if(islower(red[i]))
            {
                red[i] = 'a' + ((red[i] +strlen(red)%26)%26);
            }
        }
        printf("%s" , red);
    }
    fclose(in);
    return 0;
}
