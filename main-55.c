// stack implementation using array
#include<stdio.h>
# define A 25
int stack[A];
int top=-1;
void push()
{
    int p;
    printf("enter the data");
    scanf("%d",&p);
    if(top>=A-1)            //overflow condition A-1
    {
        printf("overflow condition exist");
    }
    else
    {
      top=top+1;
      stack[top]=p;
    }
}
void pop()
{
    int product;
    if(top==-1)
    {
    printf("underflow condition exist");
    }
    else
    {
       top--;
        printf("%d",product);
    }
}
//void top()
//{
    //if(top==-1)
    //{
    //printf("the stack is empty");
    //}
    //else
    //{
       // printf("%d",stack[top]);
   // }
    
//}
void traverse()
{
    int x;
    for(x=top;x>=0;x--)
    {
        printf("%d",stack[x]);
    }
}
void main()
{
    int value ,choice,b;
    while(1){
        
        printf("\npress 1 for push\npress 2 for traverse\npress 3 for pop\n");
        printf("enter choice-");
        scanf("%d",&choice);
        
        switch(choice)
        {
           case 1:
          // printf("enter size of stack -");
           //scanf("%d",&a);
           push();
           break;
           case 2:
           traverse();
           break;
           case 3:
           pop();
           break;
           default:
           printf("wrong input");
           
        }
        
    }
        
    }



