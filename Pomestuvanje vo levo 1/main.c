#include <stdio.h>
/**Поместување во лево Problem 3 (0 / 0)
Направете функција која што како аргументи прима два цели броја n и k (k > 0). Функцијата треба да прави циклично
поместување на цифрите на бројот n за k позиции во лево. Од СВ прочитајте еден природен број m, а потоа уште m парови
од цели броеви (n, k) и повикајте ја функцијата за секој од овие парови од броеви. Испечатете ги на СИ новодобиените броеви, секој во посебен ред.*/
void pomesti (int n,int k)
{
    int t,t1,broj1,broj2,brojel=0,p=1,y;
    t=n;
    while(t)
    {
        brojel++;
        t/=10;
    }
    while(k>brojel)
    {
        k=k-brojel;
    }
    y=brojel-k;
    t1=y;
    while(t1)
    {
        p*=10;
        --t1;
    }
    broj1=n%p;
    broj2=n/p;
    if(broj1==0)
        printf("%d\n" , broj2);
    else if(broj2==0)
        printf("%d\n" , broj1);
    else
        printf("%d%d" , broj1,broj2);
}
int main()
{
    int m,i,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        scanf("%d%d",&n,&k);
        pomesti(n,k);
    }
    return 0;
}
