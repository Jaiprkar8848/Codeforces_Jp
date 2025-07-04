// New Year and Hurry

#include<stdio.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    if(k>=240){
        printf("0");
        return 0;
    }

    k=240-k;
    int prob=0,i=1;
    while(k>0){
        if(k<5*i) break;
        k=k-5*i;
        i++;
        prob++;
    }
    if(prob>n) prob=n;
    printf("%d",prob);
}