#include<stdio.h>
#include<conio.h>
 main()
{

int i,j,k,space,x=0;
for(i=5;i>=1;i--)
{
printf("\n");
  for(j=1;j<=i;j++)
   printf("%d", j);
   for (space=0;space<x;space++)
     printf(" ");
  for(k=j-1;k>=1;k--)
    printf("%d",k);
  
 x=x+2;
}


}

