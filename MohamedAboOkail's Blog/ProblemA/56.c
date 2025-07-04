// Maximum Increase

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *a=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    int len=1,maxi=1;
    for(i=1;i<n;i++){
        if(a[i]<=a[i-1]){
            maxi=len>maxi?len:maxi;
            len=1;
        }
        else
            len++;
    }
    maxi=len>maxi?len:maxi;
    printf("%d",maxi);
}