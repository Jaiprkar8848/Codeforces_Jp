// Black Square

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a1,a2,a3,a4;
    scanf("%d%d%d%d\n",&a1,&a2,&a3,&a4);
    char s[100001];
    scanf("%s",s);
    int i=0,ans=0;
    while(s[i]!='\0'){
        if(s[i]=='1') ans+=a1;
        else if(s[i]=='2') ans+=a2;
        else if(s[i]=='3') ans+=a3;
        else ans+=a4;
        i++;
    }
    printf("%d",ans);
}