// Series of Crimes

#include<stdio.h>
#include<stdlib.h>

typedef struct star{
    int row;
    int col;
}star;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char** ch=malloc(sizeof(char*)*n);
    int i,j;
    for(i=0;i<n;i++)
        ch[i]=(char*)malloc(sizeof(char)*m);
    
    for(i=0;i<n;i++)
        scanf("%s",ch[i]);
    
    star s[3];
    int k=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ch[i][j]=='*'){
                s[k].row=i+1;
                s[k].col=j+1;
                k++;
            } 
        }
    }

    int row,col;
    if(s[0].row==s[1].row)
        row=s[2].row;
    else if(s[0].row==s[2].row)
        row=s[1].row;
    else if(s[1].row==s[2].row)
        row=s[0].row;

    if(s[0].col==s[1].col)
        col=s[2].col;
    else if(s[0].col==s[2].col)
        col=s[1].col;
    else if(s[1].col==s[2].col)
        col=s[0].col;
    
    printf("%d %d",row,col);
}