// Word

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str;
    str=malloc(sizeof(char)*101);
    scanf("%s",str);
    int i,u=0,l=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]>=65 && str[i]<=90) u++;
        else l++;
    }
    if(u<=l){
        for(i=0;i<strlen(str);i++)
            if(str[i]>=65 && str[i]<=90) str[i]=str[i]+32;
    }
    else{
        for(i=0;i<strlen(str);i++)
            if(str[i]>=97 && str[i]<=122) str[i]=str[i]-32;
    }
    printf(str);
}