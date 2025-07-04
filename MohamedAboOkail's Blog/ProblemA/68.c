// Bulbs

#include<stdio.h>
#include<stdlib.h>

int main(){
    int b,bu;
    scanf("%d%d",&b,&bu);
    int **arr=malloc(sizeof(int*)*b);
    int *len=malloc(sizeof(int)*b);  // buttons corresponding to how many bulbs
    int n,i,j;
    for(i=0;i<b;i++){
        scanf("%d",&len[i]);
        arr[i]=malloc(sizeof(int)*len[i]);
        for(j=0;j<len[i];j++)
            scanf("%d",&arr[i][j]);
    }
    int *glow=malloc(sizeof(int)*bu);
    for(i=0;i<bu;i++)
        glow[i]=0;
    // glow[i]=1 means bulb i+1 have at least 1 button
    for(i=0;i<b;i++){
        for(j=0;j<len[i];j++){
            glow[arr[i][j]-1]=1;
        }
    }
    for(i=0;i<bu;i++){
        if(glow[i]==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}