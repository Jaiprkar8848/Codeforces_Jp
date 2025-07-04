// Anton and Polyhedrons
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char** ch=malloc(sizeof(char*)*n);
    int i;
    for(i=0;i<n;i++){
        ch[i]=malloc(sizeof(char)*13);
        scanf("%s",ch[i]);
    }
    int f=0;
    for(i=0;i<n;i++){
        if(ch[i][0]=='T') f+=4;
        else if(ch[i][0]=='C') f+=6;
        else if(ch[i][0]=='O') f+=8;
        else if(ch[i][0]=='D') f+=12;
        else f+=20;
    }
    printf("%d",f);
}