// Brain's Photos

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char **ch=malloc(sizeof(char*)*n);
    int i,j;
    for(i=0;i<n;i++){
        ch[i]=malloc(sizeof(char)*m);
        for(j=0;j<m;j++){
            scanf(" %c",&ch[i][j]);
        }
    }
    int flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ch[i][j]=='C'  || ch[i][j]=='Y' || ch[i][j]=='M'){
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("#Color");
    else
        printf("#Black&White");
}