// Love 'A'

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *ch=malloc(sizeof(char)*51);
    scanf("%s",ch);
    int i=0,a=0;
    while(ch[i]!='\0'){
        if(ch[i]=='a') a++;
        i++;
    }
    if(a>(i/2)){
        printf("%d",i);
        return 0;
    }
    int n=i;
    while(n!=0){
        n-=1;
        if(a>n/2) break;
    }
    printf("%d",n);
}