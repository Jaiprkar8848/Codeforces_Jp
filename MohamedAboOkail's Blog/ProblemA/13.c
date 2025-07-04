// Soft Drinking
#include<stdio.h>

int main(){
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int drink=k*l;
    int slice=c*d;
    int toast_by_drink=drink/nl;
    int toast_by_slice=slice;
    int toast_by_salt=p/np;
    int ans=0;
    if(toast_by_drink<toast_by_slice && toast_by_drink<toast_by_salt){
        ans=toast_by_drink/n;
    }
    else{
        if(toast_by_salt<toast_by_slice)
            ans=toast_by_salt/n;
        else
            ans=toast_by_slice/n;
    }
    printf("%d",ans);
}