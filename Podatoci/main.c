#include <stdio.h>
#include <string.h>
/*Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).

Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез
ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив).
 Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот
z2, а меѓу z1 и z2 секогаш има барем еден знак.*/
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    getchar();
	FILE *f;
    if((f=fopen("podatoci.txt" , "r"))==NULL)
    {
    	printf("unable to open");
    	return -1;
    }
    char niza[80],niza1[80],z1,z2;
    scanf("%c%c" , &z1,&z2);
    while(fgets(niza,80,f)!=NULL)
    {
    	int prv=0,posleden=0,flag=1,flag2=1;
        int len=strlen(niza),i;
        for(i=0;i<len;i++)
        {
        	if(niza[i]==z1 && flag)
            {
            	flag=0;
                prv=i;
            }
            if(niza[i]==z2 && flag2)
            {
            	posleden=i;
                flag2=0;
            }
   		}
        int k=0;
        for(i=prv+1;i<posleden;i++)
        {
        	niza1[k]=niza[i];
            printf("%c" , niza1[k]);
            k++;
        }
    printf("\n");
    }
    fclose(f);
    return 0;
	}
