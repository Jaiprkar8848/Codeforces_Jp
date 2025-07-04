// Ostap and Grasshopper

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    char *str=malloc(sizeof(char)*(n+1));
    scanf("%s",str);
    
    int s,t,i;
    for(i=0;i<n;i++){
        if(str[i]=='G') s=i;
        if(str[i]=='T') t=i; 
    }
    int diff=t-s;
    if(diff>0){
        // target on the right of grashoper
        while(s<t){
            s+=k;
            if(s==t){
                printf("YES");
                return 0;
            }
            if(str[s]=='#'){
                printf("NO");
                return 0;
            }
        }
        printf("NO");
    }
    else{
        while(s>t){
            s-=k;
            if(s==t){
                printf("YES");
                return 0;
            }
            if(str[s]=='#'){
                printf("NO");
                return 0;
            }
        }
        printf("NO");
    }
}