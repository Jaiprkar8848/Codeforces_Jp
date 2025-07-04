// Sereja and Dima

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int*p=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    int s=0,e=n-1;
    int sereja=0,dima=0,turn=1;
    while(s<=e){
        if(turn){
            if(p[s]>p[e])
                sereja+=p[s++];
            else
                sereja+=p[e--];
        }
        else{
            if(p[s]>p[e])
                dima+=p[s++];
            else
                dima+=p[e--];
        }
        turn=!turn;
    }
    printf("%d %d",sereja,dima);
}