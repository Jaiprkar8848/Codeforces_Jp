// Mishka and Game

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    int m=0,c=0;
    while(n--){
        scanf("%d %d",&a,&b);
        if(a>b) m++;
        else if(a<b) c++;
    }
    if(m>c)
        printf("Mishka");
    else if(c>m)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
}