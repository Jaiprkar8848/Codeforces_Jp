// Sleuth

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str;
    str=malloc(sizeof(str)*101);

    scanf("%[^\n]s",str);
    char last;
    int i;
    for(i=0;i<strlen(str);i++){
        // either lowercase or uppercase alphabet
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 &&  str[i]<=122)
            last=str[i];
    }
    if(last=='A'||last=='E'||last=='I'||last=='O'||last=='U'||last=='Y'||last=='a'||last=='e'||last=='i'||last=='o'||last=='u'||last=='y')
        printf("YES");
    else 
        printf("NO");
}