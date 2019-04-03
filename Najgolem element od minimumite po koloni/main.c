#include <stdio.h>
#include <stdlib.h>
void pecati(int *a,int n)
{
    int i=0;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
int pogolem(int m,int n)
{
    if(m>n)
        return m;
    else
        return n;
}
int maksimum(int *a,int n)
{
    if(n==0)
        return *a;
    else
        return pogolem(*a,maksimum(a+1,n-1));
}
int main () {
    int a[100][100],i,j,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    int min=a[0][0],k=0;
    int b[100];
    for(j=0;j<m;j++) {
        min=a[0][j];
        for(i=0;i<n;i++)
            if(a[i][j]<min)
                min=a[i][j];
            b[k]=min;
            k++;
    }
    printf("\n");
    pecati(b,k);
    printf("\n%d",maksimum(b,k));
    return 0;
}

