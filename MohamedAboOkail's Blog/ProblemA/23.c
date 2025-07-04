// BlackJack

#include<stdio.h>
#include<stdlib.h>

int main(){
    int points[14]={0};
    int i;
    for(i=1;i<=10;i++)
        points[i]=i;
    points[11]=points[12]=points[13]=10;

    int n;
    scanf("%d",&n);

    // i=12 means Queen
    int diff=n-10;
    int ways=0;
    for(i=1;i<=13;i++){
        if(points[i]==diff)
            ways+=(i!=12)?4:3;
    }
    // 4 aces
    if(diff==11)
        ways+=4;
    printf("%d",ways);
}