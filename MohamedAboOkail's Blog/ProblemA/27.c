// Ultra Fast Mathematician

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str1,*str2;
    str1=malloc(sizeof(char)*101);
    str2=malloc(sizeof(char)*101);

    scanf("%s",str1);
    scanf("%s",str2);

    char* ans=malloc(sizeof(char)*101);
    int i;
    for(i=0;i<strlen(str1);i++)
        ans[i]=str1[i]==str2[i]?'0':'1';
    ans[i]='\0';
    printf(ans);
}