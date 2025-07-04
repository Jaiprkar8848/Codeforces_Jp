// Restore the permutation by merger

#include<stdio.h>
#include<stdlib.h>

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        scanf("%d",&n);
        int *a=malloc(sizeof(int)*(2*n));
        int *p=malloc(sizeof(int)*n);
        int i;
        for(i=0;i<2*n;i++)
            scanf("%d",&a[i]);
        int j=0,k,flag=0;
        for(i=0;i<2*n;i++){
            flag=0;
            for(k=j-1;k>=0;k--){
                if(p[k]==a[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1) continue;
            p[j++]=a[i];
        }
        for(i=0;i<n;i++){
            printf("%d ",p[i]);
        }
        printf("\n");
    }
}