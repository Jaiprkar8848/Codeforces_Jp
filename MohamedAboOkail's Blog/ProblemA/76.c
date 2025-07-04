// Anton and Letters

#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch[1001];
    scanf("%[^\n]s",ch);
    int a[26]={0};
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='{' || ch[i]==',' || ch[i]==' '){
            i++;
            continue;
        }
        a[ch[i]-'a']++;
        i++;
    }
    int c=0;
    for(i=0;i<26;i++)
        if(a[i]!=0) c++;
    printf("%d",c);
}