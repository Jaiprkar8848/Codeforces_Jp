// Taymyr is calling u

#include<stdio.h>

int main(){
    int n,m,z;
    scanf("%d%d%d",&n,&m,&z);
    int i,ways=0;
    for(i=1;i<=z;i++){
        if(i%n==0 && i%m==0) ways++;
    }
    printf("%d",ways);
}