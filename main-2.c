#include<stdio.h>
main(){
int a,b,d; //a is quantity,b is price per item,d is discount
float c; // c is total expense
printf("enter the unit price");
scanf("%d",&b);
printf("enter the quantity");
scanf("%d",&a);
c=a*b;
d=c*0.10;
printf("total expense=%f",c-d);

}