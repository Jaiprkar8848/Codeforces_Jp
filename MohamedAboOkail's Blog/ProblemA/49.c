// The new year : meeting friends

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int x1,x2,x3;
    scanf("%d%d%d",&x1,&x2,&x3);
    int max,min,distance;
    if(x1>x2 && x1>x3){
        max=x1;
        distance=x1-x2+x1-x3;
    }
    else if(x2>x3){
        max=x2;
        distance=x2-x1+x2-x3;
    }
    else{
        max=x3;
        distance=x3-x1+x3-x2;
    }
    min=(x1<x2 && x1<x3)?x1:(x2<x3)?x2:x3;
    int dist,i;
    for(i=min;i<max;i++){
        dist=abs(x1-i)+abs(x2-i)+abs(x3-i);
        if(dist<distance)
            distance=dist;
    }
    printf("%d",distance);
}