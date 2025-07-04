// Buy a shovel

#include<stdio.h>

int main(){
    int k,r;
    scanf("%d%d",&k,&r);
    int shovel=1,price;
    while(1){
        price=shovel*k;
        if(price%10==0 || price%10==r) break;
        shovel++;
    }
    printf("%d",shovel);
}