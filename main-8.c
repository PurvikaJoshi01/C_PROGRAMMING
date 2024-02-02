//Write a program to calculate the amount payable 
//if money has been lent on simple interest. 
//Principal or money lent = P, Rate of interest = R% per annum and Time = T years. 
//Then Simple Interest (SI) = (P x R x T)/ 100. 
//Amount payable = Principal + SI. 
//P, R and T are given as input to the program
#include<stdio.h>
main(){
    int p;
    float r,t,si;
    printf("enter the principal");
    scanf("%d",&p);
    printf("enter the rate of interest");
    scanf("%f",&r);
    printf("enter the years(time)");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest is:%f",si);
    printf("pa=%f",p+si);
    
    
    
    
    
}



