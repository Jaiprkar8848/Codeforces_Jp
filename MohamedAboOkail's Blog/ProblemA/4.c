// Perfect Permutation

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2!=0)
        printf("%d",-1);
    else{
        int i;
        for(i=0;i<n;i+=2){
            printf("%d %d ",i+2,i+1);
        }
    }
    return 0;
}