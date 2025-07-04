// Maximum in Table

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    int**a=malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
        a[i]=malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        a[0][i]=1;
        a[i][0]=1;
    }

    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    printf("%d",a[n-1][n-1]);
}