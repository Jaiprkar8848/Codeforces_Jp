// Bit++

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char** s=malloc(sizeof(char*)*n);
    int i;
    for(i=0;i<n;i++){
        s[i]=malloc(sizeof(char)*4);
        scanf("%s",s[i]);
    }
    int x=0;
    for(i=0;i<n;i++)
        (s[i][1]=='+')?x++:x--;

    printf("%d",x);
}