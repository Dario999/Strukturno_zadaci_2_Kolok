#include <stdio.h>
/**Да се креираат функции со потпис:
•	int daliProst(int broj); // оваа функција враќа 1 ако бројот broj е прост, а 0 во спротивно
•	int brojPomaliProst(int broj); // оваа функција е рекурзивна функција која го враќа бројот на прости броеви помали од вредноста broj. Оваа функција ја користи функцијата daliProst
Во main функцијата од стандардден влез се внесува еден цел број a.
На стандарден изелз во првиот ред да се отпечати:
_Brojot na prosti broevi pomali od A e X._
X е вредност која се добива соповик на соодветна функција.*/
int daliProst(int broj)
{
    int i;
    for(i=2;i<broj;i++)
    {
        if(broj%i==0)
            return 0;
    }
return 1;
}
int brojPomaliProst(int broj)
{
    if(broj==0)
        return 0;
    else if(daliProst(broj-1))
        return 1+brojPomaliProst(broj-1);
    else
        return brojPomaliProst(broj-1);
}
int main()
{
    int a;
    scanf("%d" , &a);
    printf("Brojot na prosti broevi pomali od %d e %d " , a , brojPomaliProst(a-1));
}
