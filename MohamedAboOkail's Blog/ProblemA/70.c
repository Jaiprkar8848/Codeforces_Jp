// Vitaly and Night

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int **A=malloc(sizeof(int*)*n);
    int i,j;
    for(i=0;i<n;i++)
        A[i]=malloc(sizeof(int)*(2*m));

    for(i=0;i<n;i++){
        for(j=0;j<2*m;j++){
            scanf("%d",&A[i][j]);
        }
    }

    int lits=0,win1,win2;
    for(i=0;i<n;i++){
        for(j=1;j<=m;j++){
            win1=2*j-2,win2=2*j-1;
            if(A[i][win1]==1 || A[i][win2]==1)
                lits++;
        }
    }
    printf("%d",lits);
}