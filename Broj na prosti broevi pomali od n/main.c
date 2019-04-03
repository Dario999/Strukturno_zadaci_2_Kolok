#include <stdio.h>
#include <stdlib.h>
int daliProst(int broj)
{
    int i;
    if(broj==1)
        return 1;
    for(i=2;i<broj;i++)
    {
        if(broj%i==0)
            return 1;
    }
return 0;
}
int brojPomaliProst(int broj)
{
    int i,brojac=0;
    for(i=broj-1;i>0;i--)
    {
        if(daliProst(i))
            brojac++;
    }
return brojac;
}
int main()
{
    int n;
    scanf("%d" , &n);
    printf("%d" , brojPomaliProst(n));
return 0;
}
