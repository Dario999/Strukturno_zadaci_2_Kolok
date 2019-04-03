#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d" ,&n);
    float a[n][n],b[n][n],x=0,y=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%f" , &a[i][j]);}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i>j)
                x+=a[i][j];
            if(i+j>n-1)
                y+=a[i][j];
        }}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i==j)
                b[i][j]=x;
            else if(i+j==n-1)
                b[i][j]=y;
            else
                b[i][j]=0;
        }}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%.1f " , b[i][j]);
            printf("\n");
    }
}
