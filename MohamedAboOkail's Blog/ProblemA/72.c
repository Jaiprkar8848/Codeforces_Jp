// Soldier and Bananas

#include<stdio.h>

int main(){
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);
    int req=k*w*(w+1)/2;
    if(req<=n) printf("0");
    else printf("%d",req-n);
}