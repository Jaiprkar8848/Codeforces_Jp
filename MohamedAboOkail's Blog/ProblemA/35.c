// BORZE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* str=malloc(sizeof(char)*201);
    scanf("%s",str);
    char* ans=malloc(sizeof(char)*201);
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]=='.'){
            i++;
            ans[j++]='0';
        }
        else if(str[i]=='-' && str[i+1]=='.'){
            i+=2;
            ans[j++]='1';
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            i+=2;
            ans[j++]='2';
        }
    }
    ans[j]='\0';
    printf(ans);
}