#include<stdio.h>
#include<stdlib.h>
struct node{                                    
    int data;
    struct node*link;                      //to store address of next node
};
struct node*top;

void push(){
    
    struct node*new=(struct node*)malloc(sizeof(struct node));
    if (new==NULL){
        printf("OVERFLOW...");
    }
    else{
        printf("enter data you want to insert");
        scanf("%d",&new->data);
        new->link=top;
        top=new;
    }
}
    

void display(){
    
        struct node*temp;
        temp=top;
        if(top==NULL){
            printf("empty list");
        }
        else{
             while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}
void pop(){
    struct node*temp;
    if(top==NULL){
        printf("UNDERFLOW..");
    }
    else{
        temp=top;
        top=temp->link;
        free(temp);
    }
}
int main(){
    while(1){
        int choice;
        printf("\npress 1 for push\npress 2 for display\npress 3 for pop\n");
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
           
            default:
                printf("wrong input");
                
        }
    }
}

