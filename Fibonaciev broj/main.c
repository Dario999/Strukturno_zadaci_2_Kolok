#include <stdio.h>
#include <stdlib.h>
/**Од стандарден влез се читаат N цели броеви. Да се напише програма која за секој прочитан број ќе отпечати "DA" ако е Фибоначиев број
(припаѓа на еден од елементите на Фибончиевиот ред 1 1 2 3 5 8 . . .)
 и соодветно "NE" ако не припаѓа. Дали одреден број е Фибоначиев треба да се реализира со посебна рекурзивна функција.*/
int fib(int a,int b,int n)
{
    if(n==b)
        return 1;
    else if(n<a && n<b)
        return 0;
    else
        return fib(b,a+b,n);

}
int main()
{
    int i,n,a;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d" , &a);
        if(fib(1,1,a))
            printf("DA\n");
        else
            printf("NE\n");
    }
}
