#include <stdio.h>
#include <stdlib.h>
/*Се внесуваат броеви преку тастатура се додека не се внеси знак или *. Со рекурзија треба да се провери кај
кои од нив втората цифра од лево е 8ка и да ги печати само тие броеви со имаат втора цифра од лево 8ка*/
int vtora(int n)
{
    if(n<100)
    {
        if(n%10==8)
            return 1;
        else
            return 0;
    }
    else
        return vtora(n/10);
}
int main()
{
    int a;
    while(scanf("%d" , &a))
    {
        if(vtora(a))
            printf("%d\n" , a);
    }
return 0;
}
