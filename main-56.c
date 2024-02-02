// stack implementation using array
#include<stdio.h>
# define A 25                                            //max size defined 
int stack[A];
int top=-1;                                              //intialize
void push()                                              //to add
{
    int p;                  
    printf("enter the data");
    scanf("%d",&p);
    if(top>=A-1)                                         //overflow condition A-1
    {
        printf("overflow condition exist");
    }
    else
    {
      top=top+1;                                         //to insert element
      stack[top]=p;     
    }
}
void pop()
{
    
    if(top==-1)                                          //empty stack
    {
    printf("underflow condition exist");
    }
    else
    {
       stack[top]=0;
       top--;
    
    }
}

void traverse()                                          // to display
{
    int x;
    for(x=top;x>=0;x--)
    {
        printf("%d\n",stack[x]);
    }
}
void main()
{
    int value ,choice;
    while(1){
        
        printf("\npress 1 for push\npress 2 for traverse\npress 3 for pop\n");
        printf("enter choice-");
        scanf("%d",&choice);
        
        switch(choice)
        {
           case 1:
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





