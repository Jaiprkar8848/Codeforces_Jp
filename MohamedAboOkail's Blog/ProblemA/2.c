// Is your horseshoe on the other roof
#include<stdio.h>
struct demo{
    int idx;
    int cnt;
};

int main(){
    int s[4];
    int i;
    for(i=0;i<4;i++)
        scanf("%d",&s[i]);

    struct demo A[4];
    for(i=0;i<4;i++)
        A[i].cnt=0;
        
    for(i=0;i<4;i++){
        if(s[i]==A[0].idx) A[0].cnt+=1;
        else if(s[i]==A[1].idx) A[1].cnt+=1;
        else if(s[i]==A[2].idx) A[2].cnt+=1;
        else if(s[i]==A[3].idx) A[3].cnt+=1;
        else{
            A[i].idx=s[i];
            A[i].cnt=1;
        }
    }
    
    int ans=0;
    for(i=0;i<4;i++){
        if(A[i].cnt>1) ans=ans+A[i].cnt-1; 
    }
    printf("%d",ans);
    return 0;
}