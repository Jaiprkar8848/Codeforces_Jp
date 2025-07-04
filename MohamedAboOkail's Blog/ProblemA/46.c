// Anton and Danik

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
   int n;
   scanf("%d",&n);
   char* a=malloc(sizeof(char)*(n+1));
   scanf("%s",a);
   int i=0,A=0,D=0;
   while(a[i]!='\0'){
      a[i]=='A'?A++:D++;
      i++;
   }
   if(A>D) printf("Anton");
   else if(A<D) printf("Danik");
   else printf("Friendship");
}

// HOW MANY TIME HELLO PRINTED