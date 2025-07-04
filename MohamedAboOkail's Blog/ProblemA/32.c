// Translation

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *s,*t;
    s=malloc(sizeof(char)*101);
    t=malloc(sizeof(char)*101);

    scanf("%s",s);
    scanf("%s",t);
    int n=strlen(s);
    int m=strlen(t);
    if(m!=n){
        printf("NO");
        return 0;
    }
    int start=0,end=n-1;
    char temp;
    while(start<end){
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++,end--;
    }
    int i=0;
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            printf("NO");
            return 0;
        }
        i++;
    }
    printf("YES");
}