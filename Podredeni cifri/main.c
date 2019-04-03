#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
/*Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот
на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите
во датотеката не се подолги од 100 знаци.*/
//ne menuvaj!
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void podredi(char arr[],int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
        {
            for(j=i+1; j<size; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
}
}
int main()
{
    wtf();
    FILE *f;
    if((f=fopen("input.txt" , "r"))==NULL)
    {
    	printf("unable to open");
        return -1;
    }
    char niza[100];
    while(fgets(niza,100,f)>0)
    {
    	int i,len,k=0;
        char b[100];
        len=strlen(niza);
        for(i=0;i<len;i++)
        {
        	if(isdigit(niza[i]))
            {
            	b[k]=niza[i];
                k++;
            }
        }
        len=strlen(b);
        podredi(b,len);
        printf("%d:%s" , k , b);
        printf("\n");
        for(i=0;i<len;i++)
            b[i]=0;
    }
    fclose(f);
return 0;

}
