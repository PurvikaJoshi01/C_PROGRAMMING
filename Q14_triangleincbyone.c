#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    printf("the value of n is :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum=sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
}