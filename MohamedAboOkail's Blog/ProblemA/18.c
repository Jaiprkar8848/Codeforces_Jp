// Presents

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int *p=malloc(sizeof(int)*(n+1));
    int *q=malloc(sizeof(int)*(n+1));

    p[0]=q[0]=0;
    int i;
    for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
        q[p[i]]=i;
    }

    for(i=1;i<=n;i++)
        printf("%d ",q[i]);
}