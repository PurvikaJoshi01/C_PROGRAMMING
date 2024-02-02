//for loop power program
#include<stdio.h>
main(){
    int i,p=1,a,b;
    a=2;
    printf("enter the value of b \n");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    p=p*a;
    printf("enter the value: %d",p);
}