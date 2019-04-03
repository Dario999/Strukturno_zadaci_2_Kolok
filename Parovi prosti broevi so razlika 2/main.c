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
int main()
{
    int i;
    for(i=1;i<998;i++)
    {
        if(prost(i) && prost(i+2))
        {
            printf("%d %d\n" , i , i+2);
        }
    }
return 0;
}
