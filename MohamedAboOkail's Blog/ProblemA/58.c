// Opponents

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int n,d;
    scanf("%d%d",&n,&d);

    char **ch=malloc(sizeof(char*)*d);
    int i;
    for(i=0;i<d;i++){
        ch[i]=malloc(sizeof(char)*(n+1));
        scanf("%s",ch[i]);
    }
    int maxWin=0,win=0,flag,j;
    for(i=0;i<d;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(ch[i][j]=='0'){
                flag=1;
                break;
            }
        }
        if(flag==1) win++;
        else win=0;
        maxWin=win>maxWin?win:maxWin;
    }
    printf("%d",maxWin);
}