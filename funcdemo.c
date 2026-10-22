#include<stdio.h>
int fun1(){
    printf("This is function 1\n");
    return 10;

}
//return type---func name---parameter list
int sum_of_2(int n1,int n2){
//body of function
printf("Inside sum_of_2 function\n");
int sum=n1+n2;
//return statement
return sum;
}

int main(){
    //whatever code
    printf("hello C\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int s =sum_of_2(a,b);
    
    printf("Sum is %d\n",s);

    return -1;
}