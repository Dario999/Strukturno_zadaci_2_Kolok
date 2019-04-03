#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100];
    int i,j,brojac=0,m;
    scanf("%d" , &m);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d" , &a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                if(a[i][j]==0)
                    brojac++;
            }
            else if(i<j)
            {
                if(a[i][j]==0)
                    brojac++;
            }
            else
            {
                if(a[i][j]==1)
                    brojac++;
            }
        }
    printf("%d" , brojac);
}
