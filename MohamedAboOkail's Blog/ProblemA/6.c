// LLPS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *s=malloc(sizeof(char)*11);
    scanf("%s",s);

    int i=0;
    char max=s[i];
    while(s[i]!='\0'){
        if(s[i]>max) max=s[i];
        i++;
    }
    char temp[10];
    int j=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]==max) temp[j++]=s[i];
    }
    temp[j]='\0';
    printf(temp);
}