#include <stdio.h>
#include <stdlib.h>
/*•	Од стандарден влез се читаат N парови цели броеви. Да се напише програма која за секој прочитан пар
од цели броеви ќе отпечати колку пати вториот број се појавува во првиот без преклопување на повторувањата.
 Ова да се реализира со посебна рекурзивна функција.
Пример:
за парот броеви 5167163 и 16 треба да се отпеачти 2.
*/
int brojac(int n)
{
    if(n==0)
        return 1;
    else
        return 10*brojac(n/10);
}
int broj(int n,int m)
{
    if(n==0)
        return 0;
    else
    {
        if(n%brojac(m)==m)
            return 1+broj(n/10,m);
        else
            return broj(n/10,m);
    }
}
int main()
{
    int a,b,i,n;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d" , &a , &b);
        printf("%d\n" , broj(a,b));
    }
return 0;
}
