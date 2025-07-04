// Arrival of the General

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* A=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    int minIdx=0,min=A[0];
    for(i=1;i<n;i++){
        if(A[i]<=min){
            min=A[i];
            minIdx=i;
        }
    }
    int maxIdx=0,max=A[0];
    for(i=1;i<n;i++){
        if(A[i]>max){
            max=A[i];
            maxIdx=i;
        }
    }
    int ans=0;
    if(maxIdx<minIdx)
        ans=(maxIdx-0)+(n-1-minIdx);
    else
        ans=(maxIdx-0)+(n-1-minIdx)-1;
    printf("%d",ans);
}