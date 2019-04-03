#include <stdio.h>
#include <stdlib.h>
/**Да се напише рекурзивна функција која ќе пресметува производот на цифрите од повеќецифрен број. Да се најде односот
на производот на цифрите и првобитниот број и да се испечати на екранот.**/
double cifri(int n)
{
        if (n==0)
                return 1;
        else {
                return n%10*cifri(n/10);
        }
}
int main()
{
    int x;
    float y;
    scanf("%d",&x);
    y=cifri(x)/(double)x;
    printf("%.2f", y);
}
