#include <stdio.h>
#include <stdlib.h>
int neparni(int n)
{
    if(n==0)
        return 0;
    else
        return n/10%10+neparni(n/100);
}
int main()
{
    int a;
    scanf("%d" , &a);
    printf("%d" , neparni(a));
}
