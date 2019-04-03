#include <stdio.h>
#include <stdlib.h>
/*•	Од стандарден влез се читаат N цели броеви. Да се напише програма која за секој прочитан број ќе ги отпечати на стандарден излез сите парни цифри од бројот помножени со 2, како и бројот на помножени парни цифри кои се отпечатени. Печатењето на помножените парни цифри да се реализира со посебна рекурзивна функција.
•	Пример:
•	за бројот 15628 треба да се отпечати 12416 : 3.
*/
int brojac(int n)
{
    if(n==0)
        return 0;
    else if(n%10%2==0 && n%10!=1)
        return 1+brojac(n/10);
    else
        return brojac(n/10);
}
int func(int n)
{
    if(n==0)
        return 0;
    else if(n%10%2==0 && n%10!=1)
    {
        if((n%10)*2>=10)
            return n%10*2+func(n/10)*100;
        else
            return n%10*2+func(n/10)*10;
    }
    else
        return func(n/10);
}
int main()
{
    int n,broj,i;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d" , &broj);
        printf("%d : %d\n" , func(broj) ,brojac(broj));
    }
return 0;
}
