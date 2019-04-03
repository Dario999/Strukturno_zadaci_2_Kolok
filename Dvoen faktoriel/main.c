#include <stdio.h>
#include <stdlib.h>
/**Да се напише рекурзивна функција која ќе пресметува двоен факториел (n!!).

Двојниот факториел се пресметува по формулата:

n!!=n(n−2)(n−4)...2∗0!, при што 0!=1 (ако n е парен број)

n!!=n(n−2)(n−4)...3∗1!, при што 1!=1 (ако n е непарен број)*/

int double_fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*double_fact(n-2);
}
 int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", double_fact(n));
    return 0;
}

