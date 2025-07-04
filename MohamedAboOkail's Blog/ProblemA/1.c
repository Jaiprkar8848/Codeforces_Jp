// Team

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n][3];
    int i;
    for(i=0;i<n;i++)
        scanf("%d%d%d",&A[i][0],&A[i][1],&A[i][2]);
    int cnt=0;
    for(i=0;i<n;i++){
        if(A[i][0]+A[i][1]+A[i][2]>=2) cnt++;
    }
    printf("%d",cnt);
    return 0;
}