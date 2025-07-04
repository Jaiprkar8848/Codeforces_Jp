// Bachgold problem

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i;
    if(n%2==0){
        printf("%d\n",n/2);
        for(i=1;i<=n/2;i++)
            printf("%d ",2);
    }
    else{
        // Ex-> 9
        int twos=n/2; // 4*2 + 1 -> 3*2+1*3
        printf("%d\n",twos);
        twos=twos-1;
        for(i=1;i<=twos;i++)
            printf("%d ",2);
        printf("3");
    }
}