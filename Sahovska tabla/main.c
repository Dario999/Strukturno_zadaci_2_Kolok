#include <stdio.h>
#include <stdlib.h>
/*Да се напише програма која дадена матрица ќе ја измени на начин што на крај матрицата ќе личи
на шаховска табла со тоа што елементите во “белите” полиња ќе добијат нулта вредност а останатите ќе си ја задржат старата вредност.
Пример:
1	2	3	4	5		1	0	3	0	5
7	3	9	2	8		0	3	0	2	0
6	7	8	9	10		6	0	8	0	10
7	8	9	10	9		0	8	0	10	0
8	7	6	5	4		8	0	6	0	4

*/
int main()
{
    int a[100][100],i,j,m,n,brojac=0;
    scanf("%d%d" , &m , &n);
    int b[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d" , &a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(brojac%2!=0)
                b[i][j]=0;
            else
                b[i][j]=a[i][j];
            brojac++;
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d " , b[i][j]);
            printf("\n");
    }
return 0;
}




