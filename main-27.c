#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,c1=0,c2=0;
do
{
printf("Enter a no");
scanf("%d",&n);
if (n>0)
 c1++;
else if(n<0)
  c2++;
}while(n!=0);
printf("\nPositive nos=%d",c1);
printf("\nNegative nos=%d",c2);
getch();
}