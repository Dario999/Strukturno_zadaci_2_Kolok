#include <stdio.h>
#include <stdlib.h>
/**Поместување во лево Problem 3 (0 / 0)
Направете функција која што како аргументи прима два цели броја n и k (k > 0). Функцијата треба да прави циклично
поместување на цифрите на бројот n за k позиции во лево. Од СВ прочитајте еден природен број m, а потоа уште m парови
од цели броеви (n, k) и повикајте ја функцијата за секој од овие парови од броеви. Испечатете ги на СИ новодобиените броеви, секој во посебен ред.*/
void pomesti (int n,int k)
{
    int t=n,i,j,brelementi=0,r=0,nov=0;
    while(t) // cifri na n
    {
        brelementi++;
        t/=10;
    }

    int a[brelementi], b[brelementi];
    t=n;
        for(i=brelementi-1; i>=0; i--)
        {// cifrite vo a[n]{
            a[i]=t%10;
            t/=10;
        }

    while(k>brelementi)
        k=k-brelementi;

    for(i=0; i<brelementi-k; i++) // da gi pomesti
        b[i]=a[k+i];
    for(i,j=0;i<brelementi;i++,j++)
        b[i]=a[j];

    for(i=0;i<brelementi;i++)
        nov=nov*10+b[i];
        printf("%d\n",nov);
}
int main()
{
    int m,i,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++){
        scanf("%d%d",&n,&k);
        pomesti(n,k);
    }
    return 0;
}
