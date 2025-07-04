// Panoramix's Prediction

#include<stdio.h>
#include<stdlib.h>

int isprime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);

    int i=n+1;
    while(isprime(i)!=1)
        i++;
    int nxtPrime=i;
    if(nxtPrime==m)
        printf("YES");
    else
        printf("NO");
}