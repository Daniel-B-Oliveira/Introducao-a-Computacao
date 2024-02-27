#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float xa,xb,ya,yb;
    printf("Digite dois pontos da seguinte maineira (x,y) (x',y'): ");
    scanf("(%f,%f) (%f,%f)",&xa,&ya,&xb,&yb);
    printf("Distacia entre (%.3f,%.3f) e (%.3f,%.3f): %.3f",xa,ya,xb,yb,sqrt(pow(xa-xb,2)+pow(ya-yb,2)));
    return 0;
}