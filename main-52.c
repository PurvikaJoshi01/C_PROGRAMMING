//A 5-digit positive integer is entered through the keyboard, write a function to calculate sum of digits of the 5-digit number:
//  using recursion

#include<stdio.h>
int with_rec(int);
void main()
{
    int sum,num;
    printf("enter an integer");
    scanf("%d",&num);
    sum=with_rec(num);
    printf("calculate sum  without using recursion:%d",sum);
}
int with_rec(int num) 
{
    int s=0,x;
    if(num!=0)
    
{
        x=num%10;    
        return ( x + with_rec(num/10))  ;

    }
    else{
        return 0;
    }
}