#include<stdio.h>
int main()
{
    int arr[]={7,3,2,1,5,6,4,3};
    int sum=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<=7;i++)
    {
        sum=sum+arr[i];
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<=7;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<max)
        {
            min=arr[i];
        }
    }
    printf("Sum: %d\n",sum);
    printf("Max: %d\n",max);
    printf("Min: %d",min);
    return 0;
}