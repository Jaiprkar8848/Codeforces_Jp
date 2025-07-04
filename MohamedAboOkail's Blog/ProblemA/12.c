// Remove Smallest

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void insertionSort(int A[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(A[j+1]>A[j]) break;
            temp=A[j+1];
            A[j+1]=A[j];
            A[j]=temp;
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int* p=malloc(sizeof(int)*n);
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&p[i]);
        insertionSort(p,n);
        int flag=0,j;
        for(i=0;i<n-1;i++){
            if(abs(p[i]-p[i+1])>1){
                flag=1;
                break;
            }
        }
        if(flag)
            printf("NO");
        else
            printf("YES");
        printf("\n");
    }
}