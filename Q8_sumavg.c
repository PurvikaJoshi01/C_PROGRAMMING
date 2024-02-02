#include<stdio.h>
int main(){
    int n,sum=0;
    float avg;
    printf("the size of array is:\n");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<=n-1;i++){
        printf("the %d number is: \n",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("the sum of numbers is %d \n",sum);
    printf("the average is %f \n",avg);
}