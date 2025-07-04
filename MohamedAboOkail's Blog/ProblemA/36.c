// Reconnaissance

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,d;
    scanf("%d%d",&n,&d);
    int* p=malloc(sizeof(int)*n);
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    int ways=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(abs(p[i]-p[j])<=d)
                ways++;
        }
    }
    printf("%d",ways*2);
}