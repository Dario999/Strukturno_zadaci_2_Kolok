#include <stdio.h>
#include <stdlib.h>
int zbir(int n)
{
    return (n/100) + (n%100);
}
int main()
{
    int n,brojac=0;
    for(n=1000;n<=9999;n++)
    {
        if(n % zbir(n) == 0)
        {
            printf("%d\n" , n);
            brojac++;
        }
    }
    printf("%d" , brojac);
}
