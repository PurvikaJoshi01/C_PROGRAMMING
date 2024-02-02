#include<stdio.h>
int main(){
    int n,i,j;
    printf("the value of n is ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("1");
            }
            else if((i+j)%2!=0){
                 printf("0");
            }
        }
        printf("\n");


    }
}