#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100];
    int i,j,n,flag=0,nuli=0;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
        scanf("%d" , &a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]%a[i+1]==0)
        {
            b[i]=0;
            nuli++;
            b[i+1]=2*a[i+1];
            flag=1;
        }
        else
        {
            if(flag==0)
            {
                b[i]=a[i];
                b[i+1]=a[i+1];
            }
            flag=0;
        }
    }
    for(i=0;i<nuli;i++)
        printf("0 ");
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
            printf("%d " , b[i]);
    }
}
