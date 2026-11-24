#include <stdio.h>

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int i, h=-1, l=-1, marks, count=0;
    float sum = 0.0;
    for(i = 1; i<=n; i++){
        scanf("%d", &marks);
        if(marks>=40)
            count++;
        sum+=marks;
        if(h<0){
            h=marks;
        }
        if(l<0){
            l=marks;
        }
        if(marks>h)
            h=marks;
        if(marks<l)
            l=marks;
    }
    printf("%d %d %d %.2f", count, h, l, sum/n);
    return 0;
}