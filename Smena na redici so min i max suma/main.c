#include <stdio.h>
#include <stdlib.h>
/*Да се состави програма која ќе им ги промени местата на редот со минимална сума на елементи и редот
со максимална сума на елементи во дадена целобројна матрица Аmxn. Елементите на почетната матрица се
внесуваат преку тастатура а елементите на променетата матрица да се испечатат на екран. Максималните димензии на матрицата се 10x10.
Пример:
1	2	1	0		5	3	4	9
5	3	4	9		1	2	1	0
4	4	8	5		4	4	8	5
0	2	10	6		0	2	10	6
2	6	2	3		2	6	2	3
*/
int suma(int a[],int n)
{
    int i,suma=0;
    for(i=0;i<n;i++)
        suma+=a[i];
return suma;
}
int main()
{
    int a[10][10],minSum,maxSum,iMin,iMax=0,m,n,i,j,sum;
    scanf("%d%d" , &m ,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d" , &a[i][j]);
    minSum=suma(a[0],n);
    iMin=0;
    for(i=0;i<m;i++)
        {
            sum=suma(a[i],n);
            if(sum<minSum)
            {
                minSum=sum;
                iMin=i;
            }
            if(sum>maxSum)
            {
                maxSum=sum;
                iMax=i;
            }
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            if(i==iMin)
                printf("%d " , a[iMax][j]);
            else if(i==iMax)
                printf("%d " , a[iMin][j]);
            else
                printf("%d " , a[i][j]);
        }
        printf("\n");
    }
return 0;
}
