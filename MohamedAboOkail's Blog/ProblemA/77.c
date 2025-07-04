// Choosing Teams

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int *p=malloc(sizeof(int)*n);
    int i=0;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    int eligible_players=0;
    for(i=0;i<n;i++){
        p[i]=5-p[i];
        if(p[i]>=k)
            eligible_players++;
    }
    printf("%d",eligible_players/3);
}