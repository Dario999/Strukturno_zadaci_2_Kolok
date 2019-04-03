#include <stdio.h>
#include <stdlib.h>
/*Да се напише рекурзивна функција prevrti која како аргумент прима низа од n цели броеви, и по нејзиното
 завршување првичната низа ја _„превртува“_ (го менува редоследот на нејзините членови). На пример, низата
 1, 4, 7, 5, -22, 9 ја претвора во низа 9, -22, 5, 7, 4, 1. (Дозволено е да се додадат дополнителни аргументи на функцијата!).
Да се направи програма која од тастатура ќе прочита цел број n (0 < n < 100), и потоа уште n цели броеви –
елементи на низата. Низата прво да се испечати на екран, потоа да се повика функцијата prevrti за дадената низа и
на крајот повторно да се испечати низата на екран.
*/
int prevrtuvanje(int a[],int n)
{
    if(n==0)
        return;
    printf("%d " , a[n-1]);
prevrtuvanje(a,n-1);
}
int main()
{
    int a[100],n,i;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
        scanf("%d" , &a[i]);
    prevrtuvanje(a,n);
}