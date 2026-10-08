#include<stdio.h>
int main()
{
    int units;
    float total_bill;
    scanf("%d", &units);
    if(units<=100){
        total_bill=units*1;
    }
    else if(units>100 && units<=200){
        total_bill=100*1+(units-100)*2.5;
    }
    else if(units>200 && units<=300){
        total_bill=100*1+100*2.5+(units-200)*4;
    }
    else{
        total_bill=100*1+100*2.5+100*4+(units-300)*6;
    }
    if(total_bill>400){
        total_bill=total_bill+(total_bill*0.15);
        printf("%.2f", total_bill);
    return 0;
}