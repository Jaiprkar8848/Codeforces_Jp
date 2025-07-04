// Balanced Array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if((n/2)%2!=0){
            printf("NO\n");
            continue;
        }
        int* a=malloc(sizeof(int)*n);
        int i;
        int lstart=2,lsum=0;
        for(i=0;i<n/2;i++){
            a[i]=lstart;
            lstart+=2;
            lsum+=a[i];
        }
        int rstart=1;
        for(i=n/2;i<n;i++){
            if(i==n-1){
                a[i]=lsum;
            }
            else{
                a[i]=rstart;
                lsum-=rstart;
                rstart+=2;
            }
        }
        printf("YES\n");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}