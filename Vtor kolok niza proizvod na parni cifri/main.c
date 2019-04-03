#include <stdio.h>
#include <stdlib.h>
int proizvodpardni(int n)
{
    if(n==0)
        return 1;
    else if((n%10)%2==0)
        return n%10*proizvodpardni(n/10);
    else
        return proizvodpardni(n/10);

}
int main()
{
    int a[100],i,n;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
        scanf("%d" , &a[i]);
    for(i=0;i<n;i++)
    {
        if(proizvodpardni(a[i])!=1)
            a[i]=proizvodpardni(a[i]);
        else
            a[i]=1;
    }
    for(i=0;i<n;i++)
        printf("%d " , a[i]);
return 0;
}
