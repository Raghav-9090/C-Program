#include<stdio.h>
int main()
{
    int d;
    float r1=2.5,r2=5,r3=7,r4=10,f;
    scanf("%d",&d);
    if(d<=3){
        f=d*r1;
        printf("%.2f",f);
    }
    else if(d<=6){
        f=d*r2;
        printf("%.2f",f);
    }
    else if(d<=10){
        f=d*r3;
        printf("%.2f",f);
    }
    else{
        f=d*r4;
        printf("%.2f",f);
    }
    return 0;
}