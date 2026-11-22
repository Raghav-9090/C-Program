#include<stdio.h>
int main(){
    int n,i,j,num;
    char ch='a';
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c",ch);
                ch++;
            }
                else{
                    printf("%d",num);
                    num++;
                }
            }
            printf("\n");
        }
    }
    