// Divide it

#include<stdio.h>
#define ull unsigned long long int

ull minOfTwo(ull a,ull b){
    return a<b?a:b;
}

ull minOfThree(ull a,ull b,ull c){
    if(a<b && a<c)
        return a;
    else if(b<c)
        return b;
    else
        return c;
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        ull n;
        scanf("%lld",&n);
        int cnt=0;
        while(n>1){
            if(n%2==0)
                n=n/2;
            else if(n%3==0)
                n=2*n/3;
            else if(n%5==0)
                n=4*n/5;
            else    
                break;
            cnt++;
        }
        if(n==1)
            printf("%d\n",cnt);
        else
            printf("-1\n");
    }
}