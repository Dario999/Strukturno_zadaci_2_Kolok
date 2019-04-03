#include <stdio.h>
#include <stdlib.h>
/*•	Oд стандарден влез се вчитува квадратна матрица со димензија N. Треба да се напише програма која ќе ја
најде и отпечати на стандарден излез максималната сума на елементите кои се наоѓаат на сите дијагонали над
главната дијагонала (вклучувајќи ја и главната).
Пример влез
4
4 18 7 11
3 8 16 1
17 12 9 5
6 14 4 7
Пример излез
18+16+5=39
*/
int main()
{
    int a[100][100],maxSum=0,sum,i,j,i_tmp,j_tmp,flag=1,m,i1,j1;
    scanf("%d" , &m);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d" , &a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
    {
        if(flag)
        {
            i1=i;
            j1=j;
            while(i1<m)
            {
                maxSum+=a[i1][j1];
                ++i1;
                ++j1;
            }
            i_tmp=i;
            j_tmp=j;
            flag=0;
        }
        else
        {
            if(i<j && i==0)
            {
                sum=0;
                i1=i;
                j1=j;
                while(j1<m)
                {
                    sum+=a[i1][j1];
                    ++i1;
                    ++j1;
                }
                if(sum>maxSum)
                {
                    maxSum=sum;
                    i_tmp=i;
                    j_tmp=j;
                }
            }
        }
    }
    printf("%d " , maxSum);
return 0;
}
