// Polanball and hypothesis

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int i,j,num;
    for(i=1;i<=1000;i++){
        num=n*i+1;
        if(num==2){
            continue;
        }
        for(j=2;j<num;j++){
            if(num%j==0){
                printf("%d",i);
                return 0;
            }
        }
    }
}