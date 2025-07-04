// Stones on the table

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char* a=malloc(sizeof(int)*(n+1));
    scanf("%s",a);
    int len=1,ans=0,i=0;
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            ans+=len-1;
            len=1;
        }
        else len++;
    }
    ans+=len-1;
    printf("%d",ans);
}