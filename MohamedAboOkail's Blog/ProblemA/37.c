// Die Roll

#include<stdio.h>
#include<stdlib.h>

int main(){
    int y,w;
    scanf("%d%d",&y,&w);

    int m=y>w?y:w;

    int num=6-m+1;
    if(num==0)
        printf("0/1");
    else if(num==1)
        printf("1/6");
    else if(num==2)
        printf("1/3");
    else if(num==3)
        printf("1/2");
    else if(num==4)
        printf("2/3");
    else if(num==5)
        printf("5/6");
    else if(num==6)
        printf("1/1");
}