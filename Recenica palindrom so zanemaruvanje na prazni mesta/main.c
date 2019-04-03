#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Da se napishe funkcija koaj ke provveruva dali odredena recenica e  palindrom.
Da se ignoriraat prazni mesta,interpukciski znaci i mali i golemi bukvi
pri sporedbata */
void brisi(char *str)
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(!isspace(str[i]))
        {
            str[j]=tolower(str[i]);
            j++;
        }
    i++;
    }
str[j]='\0';
}
int palindrom(char *str,int length)
{
    int i;
    for(i=0;i<length;i++)
        if(*(str+i)!=*(str+length-1-i))
            return 0;
return 1;
}
int main()
{
    char a[100];
    gets(a);
    brisi(a);
    if(palindrom(a,strlen(a)))
        printf("DA");
    else
        printf("NE");
return 0;
}
