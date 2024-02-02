//if else leap year program
#include<stdio.h>
main(){
    int a;
    
    printf("enter the year");
    scanf("%d",&a);
    
    if((a%4==0)&&(a%100!=0))
    printf("it is a leap year");
    
    else if((a%4==0)||(a%100!=0))
    printf("it is not a leap year");
    
    else
    printf("it is not a leap year");
}
