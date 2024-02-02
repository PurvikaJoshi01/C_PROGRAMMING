//Ramesh’s basic salary is input through the keyboard. 
//His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
//Write a program to calculate his gross salary.(gs=bs+da+hra)
#include<stdio.h>
main()
{
    int bs,da,hra,gs;
    printf("enter the basic salary");
    scanf("%d",&bs);
    da=bs*0.40;
    hra=bs*0.20;
    printf("da is = %d",da);
    printf("hra is = %d ",hra);
    gs=bs+da+hra;
    printf("gs is %d",&gs);
    
}