// Bear and Reverse Radwoosh

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,c;
    scanf("%d%d",&n,&c);
    int i;
    int* p=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
      scanf("%d",&p[i]);
    int* t=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&t[i]);

    int lamik=0,upto=0;
    int points;
    for(i=0;i<n;i++){
        upto+=t[i];
        points=p[i]-c*upto;
        lamik+=points>0?points:0;
    }
    upto=0;
    int radwoosh=0;
    for(i=n-1;i>=0;i--){
        upto+=t[i];
        points=p[i]-c*upto;
        radwoosh+=points>0?points:0;
    }
    if(radwoosh>lamik)
        printf("Radewoosh");
    else if(lamik>radwoosh)
        printf("Limak");
    else
        printf("Tie");
}