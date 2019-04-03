#include <stdio.h>
#include <stdlib.h>
/*Да се напише логичка ф-ја што како влезен аргумент прима цел број. Ф-јата проверува дали производот на вифри на бројот е прост број.
Забелешка: Да се напише посебна рекурзивна ф-ја за одредување на производот на цифрите на бројот.
*/
int proizvod(int n)
{
    if(n==0)
        return 1;
    else
        return n%10*proizvod(n/10);
}
int prost(int n)
{
    int i,sum=proizvod(n);
    for(i=2;i<sum;i++)
    {
        if(sum%i==0)
            return 0;
    }
return 1;
}
int main()
{
    int n;
    scanf("%d" , &n);
    if(prost(n))
        printf("DA");
    else
        printf("NE");
}
