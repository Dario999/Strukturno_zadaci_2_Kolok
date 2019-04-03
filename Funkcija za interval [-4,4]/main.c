#include <stdio.h>
#include <stdlib.h>
float stepen(float x,int n)
{
    int i,suma=1;
    if(x==0)
    {
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        suma*=x;
    }
    return suma;
}
double f(float x, int n)
{
    if(x<0)
        return -1*(stepen(x,n-1)/(n-1))+stepen(x,n+1)/(n+1);
    else
        return x+stepen(x,n)/n+(stepen(x,n+2)/(n+2));
}
int main()
{
    int n,i;
    float x;
    scanf("%d", &n);
    for(x=-4.0;x<=4.0;x+=0.1)
    {
        printf("%.2f  %.2f\n" , x , f(x , n));
    }
return 0;
}
