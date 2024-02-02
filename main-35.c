#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
float f,sum=0;
for(i=1;i<=7;i++)
{  f=1;
 for(j=1;j<=i;j++)
  {
   f=f*j;
   }
   sum=sum+i/f;
   printf(" %f  ",f) ;
  }
  printf("%f",sum);

getch();
}   