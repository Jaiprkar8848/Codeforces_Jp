// Nearly Lucky Number

#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);

    int lucky=0;
    while(n!=0){
        if(n%10==4 || n%10==7)
            lucky++;
        n/=10;
    }

    if(lucky==4 || lucky==7)
        printf("YES");
    else 
        printf("NO");
}