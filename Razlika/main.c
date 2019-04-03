#include <stdio.h>
#include <stdlib.h>
int prost(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n;
}
int najgolem(int n)
{
    int i;
    do
    {
        n++;
    }
    while(!(prost(n)));
    return n;
}

int main()
{
    int broj,n;
    scanf("%d" ,&broj);
    n=najgolem(broj);
    printf("%d - %d = %d" , n , broj , n-broj);
return 0;
}

