#include <stdio.h>
#include <stdlib.h>
/*•	Oд стандарден влез се вчитува матрица со димензии M x N. Да се напише програма која ќе ги најде
елементите на матрицата со димензии 2 x 2 која е подматрица на дадената матрица и има максимална сума.
 Да се отпечати оваа матрица на стандарден излез. Матрицата која се вчитува е со минимални димензии 2 x 2.
Пример:
4   2   7   11
3   8  16   1		17   12
17  12  9  5		6     14
6    14   4   7
*/
int main()
{
    int a[100][100],maxSum,flag=1,i,j,i_tmp,j_tmp,m,n;
    scanf("%d%d" , &m , &n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d" , &a[i][j]);
    for(i=0;i<m-1;i++)
        for(j=0;j<n-1;j++)
    {
        if(flag)
        {
            maxSum=(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]);
            i_tmp=i;
            j_tmp=j;
            flag=0;
        }
        else
        {
            if((a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1])>maxSum)
            {
                maxSum=(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]);
                i_tmp=i;
                j_tmp=j;
            }
        }
    }
    for(i=i_tmp;i<=(i_tmp+1);i++){
        for(j=j_tmp;j<=(j_tmp+1);j++)
            printf("%d " , a[i][j]);
            printf("\n");
    }
return 0;
}

