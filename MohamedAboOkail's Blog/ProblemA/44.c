// Compote

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int fruits=0;
    while(a>=1 && b>=2 && c>=4){
        fruits+=7;
        a-=1;
        b-=2;
        c-=4;
    }
    printf("%d",fruits);
}