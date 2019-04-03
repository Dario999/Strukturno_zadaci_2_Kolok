#include <stdio.h>
#include <stdlib.h>
/*Да се напише рекурзивна функција ogledalno која за аргумент прима низа од n цели броеви, и по нејзиното завршување
 првичната низа ја претвора во таканаречена _огледална низа_ на следниот начин: првиот елемент го заменува со збирот од тој
 елемент и последниот елемент од низата, вториот го заменува со збирот од тој елемент и претпоследниот елемент од низата, итн.
 до крај на низата (т.е. до последниот елемент кој го заменува со збирот од тој број и првиот број). Доколку низата има среден
 елемент тој се заменува со неговиот збир со самиот себе (на пример, низата 4, 7, 5, 22, 9 ја претвора во низа 13(=4+9), 29(=7+22),
10(=5+5), 29(=22+7), 13(=9+4)). (Дозволено е да се додадат дополнителни аргументи на функцијата).
Да се направи програма која од тастатура ќе прочита цел број n (0 < n < 100), и потоа уште n цели броеви – елементи на низата.
Низата прво да се испечати на екран, потоа да се повика функцијата ogledalno за дадената низа и на крајот повторно да се испечати низата на екран.
*/
void ogledalna(int a[],int n,int start,int n1)
{
    if(start==n)
        return;
    if(start<n/2)
        printf("%d " , a[start]+a[n1-1]);
    else if(start>n/2)
        printf("%d " , a[start]+a[n-start-1]);
    else
        printf("%d " , a[start]+a[start]);
ogledalna(a,n,++start,--n1);
}
int main()
{
    int a[100],n,i;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
        scanf("%d" , &a[i]);
    ogledalna(a,n,0,n);
}
