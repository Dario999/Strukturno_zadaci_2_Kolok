#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1=0,r2=0,r3=0,r4=0,i,j,m;
    scanf("%d" , &m);
    int a[m][m],b[m][m];
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d" , &a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
    {
        if(i<j && i+j<m-1)
            r1+=a[i][j];
        else if(i>j && i+j>m-1)
            r4+=a[i][j];
        else if(j<m/2 && i!=j && i+j!=m-1)
            r3+=a[i][j];
        else if(j>m/2 && i!=j && i+j!=m-1)
            r2+=a[i][j];
    }
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
    {
        if(i<j && i+j<m-1)
            b[i][j]=r1-a[i][j];
        else if(i>j && i+j>m-1)
            b[i][j]=r4-a[i][j];
        else if(j<m/2 && i!=j && i+j!=m-1)
            b[i][j]=r3-a[i][j];
        else if(j>m/2 && i!=j && i+j!=m-1)
            b[i][j]=r2-a[i][j];
        else if(i==j || i+j==m-1)
            b[i][j]=0;
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            printf("%d " , b[i][j]);
        printf("\n");
    }
}
