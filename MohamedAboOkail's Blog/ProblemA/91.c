// Sasha and Stick

#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned long long int n,k;
    scanf("%lld%lld",&n,&k);
    // n/k denotes how many time we skip sticks
    // if it is even means lena will end then shasha not wins
    // else shasha wins
    if((n/k)%2==1)
        printf("YES");
    else
        printf("NO");
}