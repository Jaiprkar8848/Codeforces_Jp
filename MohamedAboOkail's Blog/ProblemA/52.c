// Bus to UDAYLAND

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char** ch=malloc(sizeof(char*)*n);
    int i;
    for(i=0;i<n;i++){
        ch[i]=malloc(sizeof(char)*6);
        scanf("%s",ch[i]);
    }
    int seatMilGyi=0;
    for(i=0;i<n;i++){
        if(ch[i][0]=='O' && ch[i][1]=='O'){
            seatMilGyi=1;
            ch[i][0]=ch[i][1]='+';
            break;
        }
        else if(ch[i][3]=='O' && ch[i][4]=='O'){
            seatMilGyi=1;
            ch[i][3]=ch[i][4]='+';
            break;
        }
    }
    if(seatMilGyi==1){
        printf("YES\n");
        for(i=0;i<n;i++){
            printf(ch[i]);
            printf("\n");
        }
    }
    else
        printf("NO");
}