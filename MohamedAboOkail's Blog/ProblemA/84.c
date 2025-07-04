// Capitalization

#include<stdio.h>
#include<stdlib.h>

int main(){
    char*ch=malloc(sizeof(char)*1001);
    scanf("%s",ch);

    if(ch[0]>=97) ch[0]-=32;
    printf(ch);
}