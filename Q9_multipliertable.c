#include<stdio.h>
int main(){
    int n,i,j,multiplication;
    printf("the value of n is");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){
            multiplication=j*i;
            printf("%d * %d = %d\n",i,j,multiplication);
        }
    }
}
