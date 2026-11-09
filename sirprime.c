#include<stdio.h>
int main(){
    int num;
    bool flag=true;
    scanf("%d",&num);
    for(int i=2;i<num/i;i++)
    {
        if(num%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag){
        
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}