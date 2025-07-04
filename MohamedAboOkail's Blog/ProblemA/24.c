// Chips

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);

    int i=1;
    while(m!=0 && i<=m){
        m-=i;
        i++;
        if(i>n) i=1;
    }
    printf("%d",m);
}