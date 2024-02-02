//pointer function
#include<stdio.h>
void swap(int*,int*);
void main()
{

int a=10,b=20;
printf("Value of a=%d, Value of b=%d", a,b);
swap(&a,&b);
 printf("\nAfter interchanging, Value of a=%d, Value of b=%d", a,b);

}
 void swap(int *x,int *y)
 {
 int *c;
 *c=*x;
 *x=*y;
 *y=*c;
 printf("\ninside fn Value of a=%d, Value of b=%d", *x,*y);
 }
