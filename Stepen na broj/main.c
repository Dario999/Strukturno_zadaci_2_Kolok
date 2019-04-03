#include <stdio.h>
int stepen(int a,int b)
{
    if(a==b)
        return 1;
    else if(a<b)
        return 0;
    else
        return stepen(a,b*b);
}
int main()
{
    int i,n,a,b;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d" , &a,&b);
        if(stepen(a,b))
            printf("DA\n");
        else
            printf("NE\n");
    }
}
