#include <stdio.h>
#include <stdlib.h>
/*•	Од стандарден влез се читаат N парови цели броеви. Да се напише програма која за секој прочитан пар од цели броеви ќе го отпечати вкупниот број на појавувања на сите цифри од вториот број во првиот број. Бројот на појавувања на една цифра во даден број да се реализира со посебна рекурзивна функција.
Пример:
за парот броеви 5167163 и 17, 1 се појавува 2 пати, а 7 се појавува 1 пат, така што треба да се отпечати 1 + 2 = 3.
*/
int pati(int a,int b)
{
    int t=0;
    if(a==0)
        return 0;
    else
    {
        int tmp=b;
        while(tmp)
        {
            if(tmp%10==a%10)
                t++;
            tmp/=10;
        }
        return t+pati(a/10,b);
    }
}
int main()
{
    int n,broj,i,a,b;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d" , &a ,&b);
        printf("%d\n" , pati(a,b));
    }
return 0;
}
