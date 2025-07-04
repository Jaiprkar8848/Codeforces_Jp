// Crazy Computer

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,c;
    scanf("%d%d",&n,&c);
    int *a=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int words=1,prev=a[0];
    for(i=1;i<n;i++){
        if(a[i]-prev<=c) words++;
        else words=1;
        prev=a[i];
    }
    printf("%d",words);
}