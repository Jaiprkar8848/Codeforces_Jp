// Reconaissance 2

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* p=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    int minDiff=999,x,y,j;
    for(i=0;i<n;i++){
        if(i==n-1) j=0;
        else j=i+1;
        if(abs(p[i]-p[j])<minDiff){
            x=i,y=j;
            minDiff=abs(p[i]-p[j]);
        }
    }
    printf("%d %d",x+1,y+1);
}