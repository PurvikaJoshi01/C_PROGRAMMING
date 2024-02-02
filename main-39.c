#include<stdio.h>
#include<conio.h>
main()
{

int i,j,k=1,s=5,x;

for(i=1;i<=4;i++)
{
 for(x=1;x<=s;x++)
 printf(" ");
 s--;
  for(j=1;j<=i;j++)
  {
  printf(" %d",k);
  k++;
    }
  printf("\n");


 }
 
}