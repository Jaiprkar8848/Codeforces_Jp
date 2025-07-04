// Insomnia Cure

#include<stdio.h>
#include<stdlib.h>

int main(){
    int k,l,m,n,d;
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);

    int* arr=malloc(sizeof(int)*d);
    int i,x,cnt=0;
    for(i=0;i<d;i++){
        arr[i]=0;
        x=i+1;
        if(x%k==0 || x%l==0 || x%m==0 || x%n==0){
            arr[i]=1;
            cnt++;
        }
    }
    printf("%d",cnt);
}