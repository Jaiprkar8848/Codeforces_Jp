// Night at the museum

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *ch=malloc(sizeof(char)*101);
    scanf("%s",ch);
    int i=0,rot=0,way1,way2;
    char prev='a';
    while(ch[i]!='\0'){
        way1=abs(ch[i]-prev); // anticlock
        way2=26-way1;
        rot=rot+(way1<way2?way1:way2);
        prev=ch[i];
        i++;
    }
    printf("%d",rot);
}