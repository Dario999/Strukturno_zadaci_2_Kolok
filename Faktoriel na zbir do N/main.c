#include <stdio.h>
#include <stdlib.h>
/*Da se presmeta zbirt:
1!+(1+2)!+(1+2+3)!+...+(1+2+...+n)!
*/
int fact(int n)
{
    int i=1,zbir=1;
    while(i<=n)
    {
        zbir*=i;
        i++;
    }
    return zbir;
}
int zbir(int k)
{
    int i,suma=0;
    for(i=1;i<=k;i++)
    {
        suma+=i;
    }
    return suma;
}
int main()
{
    int n,i,sum=0;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        sum+=fact(zbir(i));
    }
    printf("%d" , sum);
}
