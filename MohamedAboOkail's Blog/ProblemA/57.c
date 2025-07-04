// Cards

#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    scanf("%d",&n);
    int *A=malloc(sizeof(int)*n);
    int sum=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    int j,part=sum/(n/2),rem;
    for(i=0;i<n;i++){
        if(A[i]==0) continue;
        rem=part-A[i];
        for(j=0;j<n;j++){
            if(A[j]==rem && j!=i) break;
        }
        printf("%d %d\n",i+1,j+1);
        A[i]=A[j]=0;
    }
}