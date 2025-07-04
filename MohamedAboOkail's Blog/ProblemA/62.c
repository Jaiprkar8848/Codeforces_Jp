// Summer Camp
#include<stdio.h>

int main(){
    char num[1002];
    int i=0,k=0,n,rev;
    for(i=1;i<=370;i++){
        n=i;
        rev=0;
        while(n!=0){
            rev=rev*10+n%10;
            n/=10;
        }
        while(rev!=0){
            num[k++]=rev%10+'0';
            rev/=10;
        }
        if(i%100==0){
            num[k++]='0';
            num[k++]='0';
        }
        else if(i%10==0){
            num[k++]='0';
        }
    }
    int x;
    scanf("%d",&x);
    printf("%c",num[x-1]);
}