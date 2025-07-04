// Fashionablee

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        unsigned int n;
        scanf("%d",&n);
        if(n%4==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}