// Helpful Maths

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char*ch=malloc(sizeof(char)*101);
    scanf("%s",ch);
    int a[3]={0};
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='1' || ch[i]=='2' || ch[i]=='3') a[ch[i]-'0'-1]++;
        i++;
    }
    int j=0;
    for(i=0;i<3;i++){
        while(a[i]>0){
            ch[j]=i+1+'0';
            j+=2;
            a[i]-=1;
        }
    }
    printf(ch);
}