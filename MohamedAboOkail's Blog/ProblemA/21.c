// Petya and Strings

#include<stdio.h>
#include<stdlib.h>

int main(){    
    char* a=malloc(sizeof(char)*101);
    char* b=malloc(sizeof(char)*101);

    scanf("%s",a);
    scanf("%s",b);

    int n=0,i=0;
    // find the length
    while(a[i]!='\0'){
        n++;
        i++;
    }
    for(i=0;i<n;i++){
        // converting to lower case
        if(a[i]<97)
            a[i]+=32;
        if(b[i]<97)
            b[i]+=32;
    }

    for(i=0;i<n;i++){
        if(a[i]<b[i]){
            printf("-1");
            return 0;
        }
        else if(a[i]>b[i]){
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}