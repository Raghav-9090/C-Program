#include<stdio.h>
int main(){
    int o,rev;
    scanf("%d",&o);
    int num1=o%10;
    int num2=(o/10)%10;
    int num3=(0/100)%10;
    int num4=(o/1000)%10;
    int num5=(0/10000)%10;
    rev=num1*10000+num2*1000+num3*100+num4*10+num5;
    printf("%d",rev);
}