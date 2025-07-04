// GOOD MATRIX ELEMENTS

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int** p=malloc(sizeof(int*)*n);
    int i,j;
    for(i=0;i<n;i++)
        p[i]=malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&p[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n/2 || j==n/2 || i==j || i+j==n-1)
                sum+=p[i][j];
        }
    }
    printf("%d",sum);
}