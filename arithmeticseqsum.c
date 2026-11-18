#include<stdio.h>
int main()
{
    int n,i,a,d,sum=0;
    scanf("%d %d %d",&n,&a,&d);
    for(i=0;i<n;i++)
    {
        sum=n/2*(2*a+(n-1)*d);
    }
    printf("Sum: %d",sum);
    return 0;
}