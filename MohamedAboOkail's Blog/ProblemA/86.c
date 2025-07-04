// Sea battle

#include<stdio.h>

int main(){
    int w1,h1,w2,h2;
    scanf("%d%d%d%d",&w1,&h1,&w2,&h2);
    int ans=2*(h1+h2)+(w1+w2)+4+(w1-w2);
    printf("%d",ans);
}