#include <stdio.h>
#include <stdlib.h>

/** 1!+(1+2)!+(1+2+3)!+...+(1+2+...+n)! */

int factoriel(int n)
{
    if(n==0)
        return 1;
    else
        return n*factoriel(n-1);
}
int zbir(int n)
{
    if(n==0)
        return 0;
    else
        return n+zbir(n-1);
}
int main()
{
    int n,i,suma=0;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        suma+=factoriel(zbir(i));
    }
    printf("%d" , suma);
}

