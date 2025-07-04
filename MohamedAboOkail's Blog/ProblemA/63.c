// Artem and his presents

#include<stdio.h>


int main(){
    unsigned int n;
    scanf("%d",&n);
    int ans;
    if(n%3==0)
        ans=2*(n/3);
    else
        ans=2*(n/3)+1;
    printf("%d",ans);
}