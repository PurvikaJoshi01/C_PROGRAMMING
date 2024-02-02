//A library charges a fine for every book returned late. 
//For first 5 days the fine is 50 paise, 
//for 6-10 days fine is one rupee and 
//above 10 days fine is 5 rupees. 
//If you return the book after 30 days your membership will be cancelled.
//WAP to accept the number of days the member is late to return the book and display the fine or the appropriate message.

#include<stdio.h>
main()
{
    int days;
    float fine;
    printf("enter the number of days- ");
    scanf("%d",&days);
    if(days>0&&days<=5)
    printf("fine is %f",0.50*days);
    else if(days>=6&&days<=10){
    fine=0.5*5+(days-5)*1;   
     printf("fine is %f",fine);
    }
    else if (days>10){
     fine=0.5*5+(days-5)*1+(days-10)*5 ;  
     printf("fine is %f",fine);
    }
    else if(days>30)
    printf("your membership is cancelled");
    
}
