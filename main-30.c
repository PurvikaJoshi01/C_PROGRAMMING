//Write a program to find the octal equivalent of the entered number.
#include<stdio.h>

void main()
{

int d,o=0,r,x=1;
scanf("%d",&d);
while(d!=0)
{
r=d%8;
d=(int)(d/8);
o=o+r*x;
x=x*10;
}
printf("%d",o);




 
}