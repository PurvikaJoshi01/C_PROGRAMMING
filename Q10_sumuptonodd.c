#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("the number of odd nautral numbers:");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++){
        if(i%2!=0){
           sum=sum+i;
           printf("%d \n",i);
        }
    }   
    printf("the sum is %d",sum);
}