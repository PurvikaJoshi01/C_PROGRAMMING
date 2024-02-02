#include<stdio.h>
int main(){
    int a,b;
    printf("value of a is ");
    scanf("%d",&a);
    printf("value of b is ");
    scanf("%d",&b);
    printf("Before swapping a = %d and b = %d \n ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a = %d and b = %d",a,b);
}