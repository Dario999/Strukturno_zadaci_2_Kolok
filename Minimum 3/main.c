#include <stdio.h>
/*•	Од стандарден влез се читаат N тројки цели броеви. Да се напише програма која за секои прочитани три цели броја ќе го
отпечати најмалиот. Наоѓањето на најмалиот од три броја да се реализира со посебна рекурзивна функција.
•	Пример:
•	за тројката броеви 8 15 3 треба да се отпечати 3.
*/
int najgolem(int a,int b,int c)
{
    if(a<b && a<c)
        return a;
    else
        return najgolem(b,c,a);
}
int main()
{
    int i,n,a,b,c;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d" , &a, &b , &c);
        printf("%d\n" , najgolem(a,b,c));
    }
return 0;
}
