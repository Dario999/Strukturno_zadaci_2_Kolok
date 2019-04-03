#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,x,y,flag=0;
    scanf("%d" , &n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d" , &a[i][j]);
        b[i][j]=a[i][j];
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            flag=0;
            if(i==j)
            {
                if(flag==0)
                {
                    b[i][j]=0;
                    flag=1;
                }
                b[i][j]=0;
                x=i;
                y=j;
                ++y;
                --x;
                while(y!=n)
                {
                    b[i][j]+=a[i][y];
                    ++y;
                }
                while(x==0 || x>0)
                {
                    b[i][j]+=a[x][j];
                    --x;
                }
            }
            if(i+j==n-1)
            {
                if(flag==0)
                {
                    b[i][j]=0;
                    flag=1;
                }
                x=i;
                y=j;
                --y;
                ++x;
                while(y==0 || y>0)
                {
                    b[i][j]+=a[i][y];
                    --y;
                }
                while(x!=n)
                {
                    b[i][j]+=a[x][j];
                    ++x;
                }
            }
        }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d " , b[i][j]);
            printf("\n");}
}


