// QAQ

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char*ch=malloc(sizeof(char)*101);
    scanf("%s",ch);
    int i=0,j,before,after,ans=0;
    for(i=0;i<strlen(ch);i++){
        if(ch[i]=='A'){
            before=0;
            after=0;
            for(j=i-1;j>=0;j--){
                if(ch[j]=='Q')
                    before++;
            }
            for(j=i+1;j<strlen(ch);j++){
                if(ch[j]=='Q')
                    after++;
            }
            ans+=(before*after);
        }
    }
    printf("%d",ans);
}