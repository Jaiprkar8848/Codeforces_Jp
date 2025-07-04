// I_LOVE_USERNAME

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* p=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    int amazing=0;
    int max,min;
    max=min=p[0];
    for(i=1;i<n;i++){
        if(p[i]<min || p[i]>max)
            amazing++;
        if(p[i]<min) min=p[i];
        if(p[i]>max) max=p[i];
    }
    printf("%d",amazing);
}