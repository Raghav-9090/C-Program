#include<stdio.h>
int main()
{
int a=0,b=0,sum=0;
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);
sum=Sumof2Numbers(a,b);
printf("Sum: %d",sum);
    return 0;
}
int Sumof2Numbers(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}