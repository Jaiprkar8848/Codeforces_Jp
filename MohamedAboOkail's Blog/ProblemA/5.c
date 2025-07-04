// System of equations

#include<stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);

    int min=n<m?n:m;
    int pair=0,i,j;
    for(i=0;i<=min;i++){
        for(j=0;j<=min;j++){
            if(i*i+j==n && i+j*j==m){
                pair++;
            }
        }
    }
    printf("%d",pair);
}