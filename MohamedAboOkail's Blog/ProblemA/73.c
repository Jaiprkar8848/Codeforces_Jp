// Pangram

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    char *s=malloc(sizeof(char)*(n+1));
    scanf("%s",s);

    int lower[26]={0};
    int upper[26]={0};
    int i;
    for(i=0;i<n;i++){
        // lower
        if(s[i]>96) lower[s[i]-'a']+=1;
        else upper[s[i]-'A']+=1;
    }

    for(i=0;i<26;i++){
        if(lower[i]==0 && upper[i]==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}