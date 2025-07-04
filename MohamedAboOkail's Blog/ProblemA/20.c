// Tram

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *a=malloc(sizeof(int)*n);
    int *b=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    
    int x=0,maxi=0;
    for(i=0;i<n;i++){
        x=x-a[i]+b[i];
        if(x>maxi) maxi=x;
    }
    printf("%d",maxi);
}