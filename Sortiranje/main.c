/*Да се напише функциjа за сортирање на низа од цели броеви. Потоа да се напише функциjа за споjување на две низи од цели броеви сортирани
во растечки редослед. Оваа функциjа треба да ги смести веќе сортираните две низи во нова низа коjа ќе биде исто така сортирана во растечки
редослед и НЕ СМЕЕ да ја повикува функциjата за сортирање.*/
#include <stdio.h>
#define MAX 400
void sort (int *a, int n){
    int i,j;
       for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                if(a[j]>a[j+1]){
                    int tmp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=tmp;
                }
            }
       }
}
void merge(int *a,int *b,int *c,int n){
    int i=0,j=0,k=0,x;
    while(i<n&&j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else {
            c[k++]=b[j++];
        }
    }
    if(i<n){
        for(x=i;x<n;++x){
            c[k++]=a[x];
        }
    }
        else if(j<n){
            for(x=j;x<n;++x){
                c[k++]=b[x];
            }
        }
}

int main() {
    int n;
    int a[MAX];
    int b[MAX];
    int c[MAX];
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    sort(a, n);
    sort(b, n);
    merge(a, b, c, n);
    for(i = 0; i < 2 * n; ++i) {
        printf("%d ", c[i]);
    }
    return 0;
}
