#include <stdio.h>
#include <stdlib.h>
int prost(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return n;
}
int zbir(int n)
{
    int zbir1=0;
    while(n)
    {
        zbir1+=(n%10);
        n/=10;
    }
    return zbir1;
}
int main()
{
    int i,brojac,t;
    for(i=1;i<10000;i++)
    {
        t=zbir(i);
        if(prost(i) && t)
        {
            printf("%d " , i);
            brojac++;
        }
    }
    printf("\n%d" , brojac);
return 0;
}
