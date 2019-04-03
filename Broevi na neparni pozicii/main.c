#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Да се напише рекурзивна функција која за даден природен број ќе го врати бројот кој се
добива само од цифрите кои се наоѓаат на непарни позиции, гледано од десно кон лево и ќе формира нов број.
 Се смета дека најмалку значајната цифра се наоѓа на 0-та позиција.
 Влез: 85311				Излез: 51
*/
int neparni(int n,int br)
{
    if(n==0)
        return 0;
    if(br%2==0)
        return neparni(n/10,++br);
    else
        return n%10+neparni(n/10,++br)*10;
}
int main()
{
    int a;
    scanf("%d" , &a);
    printf("%d" , neparni(a,0));
}
