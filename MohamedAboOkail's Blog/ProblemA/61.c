// Vanya and Fence

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,h;
    scanf("%d%d",&n,&h);
    int* height=malloc(sizeof(int)*n);
    int i,ans=0;
    for(i=0;i<n;i++){
        scanf("%d",&height[i]);
        if(height[i]>h) ans+=2;
        else ans+=1;
    }
    printf("%d",ans);
}