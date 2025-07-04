// String Similarity


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char *s=malloc(sizeof(char)*(2*n));
        scanf("%s",s);
        // middle character is common part of every substring of length n
        int i;
        for(i=0;i<n;i++)
            printf("%c",s[n-1]);
        printf("\n");
    }
}