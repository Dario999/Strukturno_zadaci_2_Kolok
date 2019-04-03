/**Да се напише програма која ќе ги прочита елементите на
една матрица сместени во текстуална датотека „matrica.txt“.
Во првиот ред на датотеката се запишани бројот на редици и
колони на матрицата, а потоа се запишани елементите на
матрицата. Потребно е за секоја редица да го пресметате
збирот на елементите и во текстуалната датотека
„izlez.txt“ да се испечатат само оние збирови по редици
коишто се поголеми од 10.

Забелешка: Да не се менуваат дадените функции writeToFile()
printFile(). Тие служат за креирање и проверка на потребните
датотеки.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void writeToFile()
{
    FILE *f1=fopen("Matrica.txt" , "w");
    char c;
    while((c=getchar())!="#")
    {
        fputc(c , f1);
    }
    fclose(f1);
}
void printFile()
{
    FILE *f1=fopen("izlez.txt" , "r");
    char line[100];
    while((feof(f1))==0)
    {
        fgets(line,100,f1);
        if(feof(f1))
            break;
        printf("%s" , line);
    }
    fclose(f1);
}
int main()
{
    writeToFile();
    FILE *f1,*f2;
    char c;
    int n,m,niza[MAX][MAX],i,j,s=0;
    if((f1=fopen("matrica.txt" , "r"))==NULL)
    {
        printf("Datotekata ne se otvara");
        return -1;
    }
    fscanf(f1,"%d%d" , &n , &m);
    for(i=0;i<n&&!feof(f1);i++)
        for(j=0;j<m&&!feof(f1);j++)
            fscanf(f1,"%d" , &niza[i][j]);
    fclose(f1);
    f2=fopen("output.txt" , "w");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            s=s+niza[i][j];
        if(s>10)
            printf("%d\n" , s);
        s=0;
    }
    fclose(f2);
    printFile();
    return 0;
}


