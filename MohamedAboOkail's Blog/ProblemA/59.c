// Free Ice Cream

#include<stdio.h>

int main(){
    int n;
    long long int x;
    scanf(" %d %lld",&n,&x);
    int i=0,distres=0;
    long long int am;
    char ch;
    while(n--){
        scanf(" %c %lld",&ch,&am);
        if(ch=='-'){
            (x-am>=0)?x-=am:distres++;
        }
        else    
            x+=am;
    }
    printf("%lld %d",x,distres);
}