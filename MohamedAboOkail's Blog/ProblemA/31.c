// Triangular Numbers

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0,i;
    for(i=1;i<=n;i++){
        sum+=i;
        if(sum>n) break;
        if(sum==n){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}