#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Dadena datoteka sodrzi broevi od oblikot
12 7 90 23 6 8
3 42 5345 987 4
43
543 6
34 65 787 9
a) da se kreira funkcija koja za daden broj vraca
	1 - sumata na cifrite e prost broj
	0 - sumata na cifrite ne e prost broj
b) Koristejci ja funkcijata na ekran da se ispecatat site broevi od datotekata cija sto suma
    na cifrite e prost broj
v) Istite broevi da se zapisat vo nova datoteka IZLEZ.TXT

Izlez na ekran:
12
7
23
43

*/
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}
int prost(int n)
{
    int sum=0,i,t;
    while(n)
    {
        t=n%10;
        sum+=t;
        n/=10;
    }
    for(i=2;i<sum;i++)
    {
        if(sum%i==0)
            return 0;
    }
return 1;
}
int main()
{
    wtf();
    FILE *f,*out;
    if((f=fopen("text.txt" , "r"))==NULL)
    {
        printf("unable to read");
            return -1;
    }
    if((out=fopen("izlez.txt" , "w"))==NULL)
    {
        printf("unable to write");
            return -1;
    }
    int broj;
    while((fscanf(f,"%d",&broj))!=NULL)
    {
        if(prost(broj))
        {
            fprintf(out,"%d\n" , broj);
            printf("%d\n" , broj);
        }
    }
    fclose(f);
    fclose(out);
    return 0;
}
