// nested if else, 

#include<stdio.h>
main(){
    int yos,qual,salary;
    char gen;
    printf("enter gender, years of service and qualification(pg=1,g=0):");
    scanf("%c%d%d",&gen,&yos,&qual);   
    if(gen=='m'){
        yos>=10;
        if(qual==1)
        printf("the salary is 15000");
        else
        printf("the salary is 10000");
        
    }
    else
    {
        yos>=10;
        if(qual==1)
        printf("the salary is 12000");
        else
        printf("the salary is 9000");
    
    if(gen=='m'){
        yos<10;
        if(qual==1)
        printf("the salary is 10000");
        else
        printf("the salary is 7000");
        
    }
    else
    {
        yos<10;
        if(qual==1)
        printf("the salary is 10000");
        else
        printf("the salary is 6000");
    }
        
    }
}