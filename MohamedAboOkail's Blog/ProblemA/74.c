// Fox and Snake

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j;
    char** ch=malloc(sizeof(char*)*n);
    for(i=0;i<n;i+=2){
        ch[i]=malloc(sizeof(char)*(m+1));
        for(j=0;j<m;j++){
            ch[i][j]='#';
        }
    }
    int flag=1;
    for(i=1;i<n;i+=2){
        ch[i]=malloc(sizeof(char)*(m+1));
        if(flag){
            for(j=0;j<m-1;j++)
                ch[i][j]='.';
            ch[i][j]='#';
        }
        else{
            ch[i][0]='#';
            for(j=1;j<m;j++)
                ch[i][j]='.';
        }
        flag=!flag;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%c",ch[i][j]);
        printf("\n");
    }
}