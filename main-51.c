//A 5-digit positive integer is entered through the keyboard, write a function to calculate sum of digits of the 5-digit number:
// Without using recursion

#include<stdio.h>
int without_rec(int);
void main()
{
    int sum,num;
    printf("enter an integer");
    scanf("%d",&num);
    sum=without_rec(num);
    printf("calculate sum  without using recursion:%d",sum);
}
int without_rec(int num)
{
    int s=0,x;
    while(num!=0)
    {
      x=num%10;
      num=num/10;
      s=s+x;
    }
    return s;
}