// Amusing Joke

#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str1,*str2,*str3;

    str1=malloc(sizeof(char)*100);
    str2=malloc(sizeof(char)*100);
    str3=malloc(sizeof(char)*200);
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    int freq[26]={0};
    int i=0;
    while(str1[i]!='\0')
        freq[str1[i++]-'A']++;
    i=0;
    while(str2[i]!='\0')
        freq[str2[i++]-'A']++;
    i=0;
    while(str3[i]!='\0')
        freq[str3[i++]-'A']--;
        
    for(i=0;i<26;i++){
        if(freq[i]!=0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}