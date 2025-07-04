// Army

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int* d=malloc(sizeof(int)*(n-1));
    int i;
    for(i=0;i<n-1;i++)
        scanf("%d",&d[i]);
    int a,b;
    scanf("%d%d",&a,&b);
    int years=0;
    for(i=a;i<b;i++)
        years+=d[i-1];
    printf("%d",years);
}