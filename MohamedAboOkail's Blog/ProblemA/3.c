// Boy or Girl

#include<stdio.h>

int main(){
    char user[100];
    scanf("%s",user);
    int ch[26]={0};
    int i=0;
    while(user[i]!='\0'){
        ch[user[i]-'a']++;
        i++;
    }
    int cnt=0;
    for(i=0;i<26;i++)
        if(ch[i]>0) cnt++;

    if(cnt%2!=0)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
}