// New Year and Counting Cards

#include<stdio.h>
#include<stdlib.h>

int main(){
    char* s=malloc(sizeof(char)*51);
    scanf("%s",s);
    int i=0;
    int flips=0;
    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
            flips++;
        i++;
    }
    printf("%d",flips);
}