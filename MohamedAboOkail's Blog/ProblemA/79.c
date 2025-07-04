// Police Recruits

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *p=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    
    int officers=0,untreated=0;
    for(i=0;i<n;i++){
        if(p[i]!=-1) officers+=p[i];
        else{
            if(officers!=0)
                officers--;
           else
                untreated++;
        }
    }
    printf("%d",untreated);
}