// Elephant

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int steps=0;
    while(x!=0){
        if(x>=5) x-=5;
        else x=0;
        steps++;
    }
    printf("%d",steps);
}