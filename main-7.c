//Write a program that asks the user to enter their name and age.
//Print a message addressed to user that tells the user, year in which they turn 100 years old. 
#include<stdio.h>
main()
{
    int age,year;
    char name;
    printf("enter your name \n");
    scanf("%s",&name);
    printf("enter your age\n");
    scanf("%d",&age);
    year=100-age+2022;
    printf("the year in which you'll turn 100 years old is %d",year);
}

