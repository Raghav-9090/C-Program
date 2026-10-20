#include<stdio.h>
int main(){
    int nl,i,j;
    scanf("%d",&nl);
    for(i=0;i<=nl;i++){
        for(j=nl;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}