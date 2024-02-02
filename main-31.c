//Write a program to find the range of a set of numbers. Range is the difference between the smallest and biggest number in the list.


#include<stdio.h>
main()
{
int n,a,b,small,i,large=0,range;
printf("Enter n");
scanf("%d",&n);
printf("Enter no  1");
scanf("%d",&a);
small=a;
large=a;
for(i=2;i<=n;i++)
{
printf("Enter no %d ",i);
scanf("%d",&b);
if(small>b)
small=b;
if(large<b)
large=b;

}
printf("Smallest no is %d",small);
printf("Largest no is %d",large);
 
printf("range=%d-%d=%d",large-small=range);
}

