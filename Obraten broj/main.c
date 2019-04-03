#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**Од тастатура се внесуваат непознат број цели броеви. Да се написе програма која на екран го
 додава само бројот  чиј што збир со бројо запишан со истите цифри, но во обратен редослед е палиндром.
 Да се напише рекурзивна ф-ја за добивање на број запишан со истите цифри, но во обратен редослед.
Пример:
Влез: 23 1753 201 1142 872
Излез: 23 201 1142
(23+32=55, 201+102=303, 1142+2411=3553)
*/
int lenght(int n)
{
    if(n==0)
        return 0;
    else
        return 1+lenght(n/10);
}
int broj(int n,int len)
{
    if(len==0)
        return n;
    else
        return(((n%10)*pow(10,len-1))+broj(n/10,--len));
}
int main()
{
   int a,reverse,sum,l1,l2;
   while(scanf("%d" , &a))
   {
        l1=lenght(a);
        sum=a+broj(a,l1);
        l2=lenght(sum);
        if(sum==broj(sum,l2))
            printf("%d\n" , a);
    }
return 0;
}
