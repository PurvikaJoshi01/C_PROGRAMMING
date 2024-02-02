#include<stdio.h>
void func(int a, int b, int c, int d, int e );
void main()
{
    int a,b,c,d,e;
    float sum,avg,std_dev;

    printf("1st number: ");
    scanf("%d", &a);
    printf("2nd number: ");
    scanf("%d", &b);
    printf("3rd number: ");
    scanf("%d", &c);
    printf("4th number: ");
    scanf("%d", &d);
    printf("5th number: ");
    scanf("%d", &e);

    func(a,b,c,d,e);
    

    
}
void func(int a, int b, int c, int d, int e)

{
    float sum,avg,std_dev;
    sum = a+b+c+d+e;
    avg = sum/5.0;
    std_dev = sqrt (((a-avg)*(a-avg))+((b-avg)*(b-avg))+((c-avg)*(c-avg))+((d-avg)*(d-avg))+((e-avg)*(e-avg))/5.0);
    
    printf("The Sum: %f\n", sum);
    printf("The Average: %f\n", avg);
    printf("The Standard Deviation: %f", std_dev);


}