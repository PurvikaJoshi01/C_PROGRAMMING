//Write a function power ( a, b ), to calculate the value of a raised to b.

#include<stdio.h>
int a,b,i,answer=1;
int power(int,int);  // function declaration
main()
{
    printf("enter value of a:");
    scanf("%d",&a);
    
    printf("enter the value of b:");
    scanf("%d",&b);
    
    answer=power(a,b);      // function call 
    
    printf("answer is %d",answer);
    
}
int power(int a, int b)      // function definition
{
    for(i=1;i<=b;i++)
    answer=answer*a;
    return answer;
    
}
