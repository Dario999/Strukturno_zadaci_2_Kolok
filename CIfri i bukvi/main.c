/*Да се напише програма која од датотеката со име "text.txt" ќе ги одреди и отпечати на стандарден излез односот на цифри и букви.
Забелешка: Да не се менува функцијата writeToFile(). Таа служи за креирање и пополнување на влезната датотека со податоците дадени
на стандардниот влез.*/
#include <stdio.h>
void writeToFile()
{
    FILE *pok=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!='#')
    {
        fputc(c , pok);
    }
    fclose(pok);
}
int main()
{
    writeToFile();
    float znak=0,broj=0;
    char ch;
    FILE *f1;
    if((f1=fopen("text.txt" , "r"))==NULL)
    {
        printf("Ne moze da se otvori");
        return -1;
    }
    while((ch=fgetc(f1))!=EOF)
    {
        if(isalpha(ch))
            znak++;
        if(isdigit(ch))
            broj++;
    }
    printf("%.2f" , broj/znak);
    fclose(f1);
return 0;
}
