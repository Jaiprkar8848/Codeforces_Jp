// One - dimensional Japanese crossword

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char *ch=malloc(sizeof(char)*(n+1));
    scanf("%s",ch);
    int arr[100]={0};
    int groups=0,siz=0,i=0,j=0;
    while(ch[i]!='\0'){
        if(ch[i]=='B'){
            if(siz==0) groups++;
            siz++;
        }
        else if(i!=0 && ch[i-1]=='B') {
            arr[j++]=siz;
            siz=0;
        }
        i++;
    }
    if(siz!=0)
        arr[j]=siz;
    printf("%d\n",groups);
    for(j=0;arr[j]!=0;j++)
        printf("%d ",arr[j]);
}