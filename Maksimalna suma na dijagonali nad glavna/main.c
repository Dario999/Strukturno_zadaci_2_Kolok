#include <stdio.h>
#include <stdlib.h>
/*Oд стандарден влез се вчитува квадратна матрица со димензија N. Треба да се напише
програма која ќе ја најде и отпечати на стандарден излез максималната сума на елементите кои се наоѓаат на сите дијагонали над главната дијагонала (вклучувајќи ја и главната).*/
int main()
{
    int a[100][100],m,i,j,max=0,sum=0,flag=1,in,jn;
    scanf("%d" , &m);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d" , &a[i][j]);
    i=0;
    for(j=0;j<m;j++)
    {
        in=i;
        jn=j;
        while(jn<m)
        {
            sum+=a[in][jn];
            ++in;
            ++jn;
        }
    if(sum>max)
        max=sum;
    sum=0;
    }
    printf("%d" , max);
    return 0;
}
