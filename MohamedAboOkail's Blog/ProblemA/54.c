// Hulk

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("I hate it");
        return 0;
    }
    int i;
    for(i=0;i<n;i++){
        if(i%2==0){
            if(i==n-1) printf("I hate ");
            else printf("I hate that ");
        }
        else{
            if(i==n-1) printf("I love "); 
            else printf("I love that ");
        }
    }
    printf("it");
}