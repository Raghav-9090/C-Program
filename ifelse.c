#include<stdio.h>
int main()
{
    int marks;
    char grade;
    scanf("%d", &marks);
    if(marks>=75){
        grade = 'A';
        printf("%c", grade);
    }
    if(marks>=65 && marks<75){
        grade = 'B';
        printf("%c",grade);
    }
    if(marks>=55 && marks<65){
        grade='C';
        printf("%c",grade);
    }
    if(marks>50 && marks<55){
        grade='D';
        printf("%c",grade);
    }
    if(marks<50){
        grade='F';
        printf("%c",grade);
    }
    return 0;
}