// sum of five subjects
// percentage of 5 subjects
//grades in five subjects
#include<stdio.h>
main()
{
    int s1,s2,s3,s4,s5,total;
    float p;
    printf(" enter the marks in 5 subjects ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1,s2,s3,s4,s5;
    p=total/500.0*100;               //take 500.0 i,e take in decimal form (float has higher priority)
    printf("the total is %d",total);
    printf("the percentage is %f",p);
    if(p>=80)
    printf(" \n it is A grade");
    else if((p>=70) && (p<=80))
    printf(" \n it is B grade");
    else if(p>=60)
    printf(" \n it is C grade");
    else if (p>=50)
    printf(" \n it is E grade");
    else if (p>=36)
    printf(" \n it is F grade");
    else
    printf(" \n fail");
}
