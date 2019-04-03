#include <stdio.h>
#define MAX 100
#include <string.h>
int main()
{
    int i,j,m,n;
    float a[MAX][MAX],b[MAX][MAX];
    FILE *input,*output;
    if((input=fopen("matrica1.txt" , "r"))==NULL)
    {
        printf("Ne moze da se otvori");
        return 1;
    }
    if(!feof(input))
        fscanf(input, "%d %d" , &m , &n);
    if((m>MAX) || (n>MAX))
        {printf("BIG");
        return -1;}
    for(i=0;i<m && !feof(input);i++)
        for(j=0;j<n && !feof(input);i++)
            fscanf(input,"%f" , &a[i][j]);
    fclose(input);
    if(i!=m || j!=n)
    {
        printf("Nema dovolno podatoci");
        return -1;
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            b[j][i]=b[i][j];
    if((output=fopen("matrica2.txt" , "w"))==NULL)
    {
        printf("Ne moze da se otvori2 ");
        return -1;
    }
    fprintf(output,"%d %d\n", n , m);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            fprintf(output,"%7.2f\n" , b[i][j]);
    fclose(output);
return 0;
}
