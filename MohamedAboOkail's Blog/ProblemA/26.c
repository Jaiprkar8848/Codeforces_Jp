// Way too long words

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);

    char** ch=malloc(sizeof(char*)*n);
    int i;
    for(i=0;i<n;i++)
        ch[i]=(char*)malloc(sizeof(char)*101);
    for(i=0;i<n;i++)
        scanf("%s",ch[i]);

    char s[100];
    int len=0;
    for(i=0;i<n;i++){
        len=strlen(ch[i]);
        if(len>10){
            s[0]=ch[i][0];
            itoa(len-2,s+1,10);
            if(len-2==9){
                s[2]=ch[i][len-1];
                s[3]='\0';
            }
            else{
                s[3]=ch[i][len-1];
                s[4]='\0';
            }
            printf("%s\n",s);
        }
        else{
            printf("%s\n",ch[i]);
        }
    }
}