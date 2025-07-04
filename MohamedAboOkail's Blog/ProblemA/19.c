// EPIC GAME

#include<stdio.h>
#include<math.h>

int gcd(int m,int n){
    if(m==0) return n;
    if(n==0) return m;
    if(m%n==0)
        return n;
    if(n%m==0)
        return m;
    if(n>m)
        return gcd(n-m,m);
    else
        return gcd(m-n,n);
}

int main(){
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    
    int turn=1;
    while(n!=0){
        if(turn%2==1)
            n-=gcd(a,n);
        else
            n-=gcd(b,n);
        turn++;
    }
    if(turn%2==0)
        printf("0");
    else
        printf("1");
}