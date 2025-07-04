// Holiday of equality

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* a=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    int minBurl=0;
    for(i=0;i<n;i++){
        minBurl+=(max-a[i]);
    }
    printf("%d",minBurl);
}