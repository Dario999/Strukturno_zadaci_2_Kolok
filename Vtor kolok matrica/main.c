#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,k,l,max=0;
    scanf("%d%d" , &m ,&n);
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d" , &a[i][j]);
    scanf("%d%d" , &k ,&l);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(i<k && j>l)
                a[i][j]=max;
            if(i>k && j<l)
                a[i][j]=0;
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d " , a[i][j]);
            printf("\n");
    }
return 0;
}
