// Lucky Ticket

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    char* m=malloc(sizeof(char)*(n+1));
    scanf("%d",&n);
    scanf("%s",m);

    int rightHalf=0,leftHalf=0;
    int i=0;
    for(i=0;i<n;i++){
        if(m[i]!='4' && m[i]!='7'){
            printf("NO");
            return 0;
        }
        if(i<n/2)
            leftHalf+=m[i]-'0';
        else
            rightHalf+=m[i]-'0';
    }
    if(leftHalf==rightHalf)
        printf("YES");
    else 
        printf("NO");
}