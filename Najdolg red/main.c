#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат
знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед.
Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.*/
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *fin=fopen("dat.txt", "r");
    char red[100], najgolemred[100];
    int maxznaci=0;
    while(fgets(red,100,fin)!=NULL)
    {
        int cifri=0, prvacifra=0, poslednacifra=0, znaci=0;
        int len=strlen(red), i, prvaflag=1;
        for(i=0; i<len; i++)
        {
            znaci++;
            if(isdigit(red[i])&&prvaflag)
            {
                prvaflag=0;
                prvacifra=i;
                cifri++;
                continue;
            }
            if(isdigit(red[i]))
            {
                cifri++;
                poslednacifra=i;
            }
        }
        if(znaci>=maxznaci && cifri>=2)
        {
            maxznaci=znaci;
            strncpy(najgolemred, red+prvacifra, poslednacifra-prvacifra+1);
        }
    }

    puts(najgolemred);

    return 0;
}
