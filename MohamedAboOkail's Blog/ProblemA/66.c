// Far Relative's Birthday Cake

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char** ch=malloc(sizeof(char*)*(n+1));
    int i;
    for(i=0;i<n;i++){
        ch[i]=malloc(sizeof(char)*(n+1));
        scanf("%s",ch[i]);
    }

    if(n==1){
        printf("0");
        return 0;
    }
    // row wise
    int pairs=0,cnt1,cnt2,j;
    for(i=0;i<n;i++){
        cnt1=0;
        cnt2=0;
        for(j=0;j<n;j++){
            if(ch[i][j]=='C') cnt1++;
            if(ch[j][i]=='C') cnt2++;
        }
        pairs+=(cnt1*(cnt1-1))/2;
        pairs+=(cnt2*(cnt2-1))/2;
    }
    printf("%d",pairs);
}