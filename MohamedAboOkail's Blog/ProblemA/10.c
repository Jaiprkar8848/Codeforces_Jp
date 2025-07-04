// Next Round

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    int* p=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    
    int threshold=p[k-1];
    int cnt=0;
    for(i=0;i<n;i++){
        if(p[i]>0 && p[i]>=threshold) cnt++;
    }
    printf("%d",cnt);
    return 0;
}