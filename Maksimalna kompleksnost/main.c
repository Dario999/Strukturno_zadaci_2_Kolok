#include <stdio.h>
#include <stdlib.h>
/*•	Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со најголема комплексност и
 ќе ја испечати на стандарден излез оваа комплексност, заедно за кој е пресметана. Комплексност на редот се пресметува
  како збир на ASCII кодовите на сите мали букви. Максималната должина на еден ред е 80 знаци.*/
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int main()
{
    wtf();
    FILE *f=fopen("text.txt" , "r");
    char a[80],b[80];
    int max=0,sum=0,i;
    while((fgets(a,80,f))>0)
    {
        sum=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>='a' && a[i]<='z')
                sum+=a[i];
        }
        if(sum>max)
        {
            strcpy(b,a);
            max=sum;
        }
    }
printf("%d\n%s" , max , b);
fclose(f);
return 0;
}
