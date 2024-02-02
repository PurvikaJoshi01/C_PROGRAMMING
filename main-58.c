 //array implementation using queue
 
 #include<stdio.h>
 # define n 25
 int queue[n];
 int front=-1;
 int rear=-1;
 int q[n]
 void insert(q[n],a);
 void delete(q[n],x);
 void insert(q[n],a)
 {
     if(rear=max-1)                                     //overflow condition    
     {
         printf("queue overflow");
     }
     else if(front=rear=-1)                             //empty queue condition
     {
         rear++;
         q[rear]=a;
         front++;
     }
     else                                                //any other condition
     {
         rear++
         q[rear]=a;
         return;
     }
 }
 void delete(q[n],x)
 {
    if(front=-1) 
    {
        printf("underflow");
    }
    else
    {
        front++;
        q[front]=x;
        return;
    }
 }
 
 
 



