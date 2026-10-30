#include<stdio.h>
int main(){
    int a,b=0,mul=1,d,res=0;
    scanf("%d",&a);
    while(a>0)
    {
   d=a%10;
   if(d%2==0){
       res=d*mul+res;
mul*=10;
    }
    a/=10;
}
    printf("%d\n",res);
    return 0;
}