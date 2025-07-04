// A good contest 
#include<stdio.h>
#include<stdlib.h>

typedef struct participant{
    char user[11];
    int before;
    int after;
}p;

int main(){
    int n;
    scanf("%d",&n);
    char** user=malloc(sizeof(char*)*n);
    int *before=malloc(sizeof(int)*n);
    int *after=malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        user[i]=malloc(sizeof(char)*11);
        scanf("%s",user[i]);
        scanf("%d",&before[i]);
        scanf("%d",&after[i]);
    }
    int flag=0;
    for(i=0;i<n;i++){
        if(before[i]<2400) continue;
        if(after[i]>before[i]){
            flag=1;
            break;
        }
    }  
    flag==1?printf("YES"):printf("NO");
}