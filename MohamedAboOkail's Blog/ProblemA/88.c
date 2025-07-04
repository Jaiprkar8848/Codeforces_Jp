// Find extra one

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    int* x=malloc(sizeof(int)*n);
    int* y=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
    
    int left=0,right=0;
    for(i=0;i<n;i++){
        if(x[i]<0) left++;
        if(x[i]>0) right++; 
    }
    if(left<=1 || right<=1)
        printf("YES");
    else
        printf("NO");
}