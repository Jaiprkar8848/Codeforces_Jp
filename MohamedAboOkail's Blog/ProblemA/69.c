// Patrick and Shopping

#include<stdio.h>

int main(){
    int d1,d2,d3;
    scanf("%d%d%d",&d1,&d2,&d3);
    int min=d1+d2+d3;
    if(2*(d1+d3)<min)
        min=2*(d1+d3);
    else if(2*(d2+d3)<min)
        min=2*(d2+d3);
    else if(2*(d1+d2)<min)
        min=2*(d1+d2);
    printf("%d",min);
}