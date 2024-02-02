//Doubly link list
#include<stdio.h>                  
#include<malloc.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first,*last;

void createlist(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        first = (struct node *)malloc(sizeof(struct node));

        if(first != NULL)
        {
            printf(" DATA OF 1 NODE: ");
            scanf("%d", &data);

            first->data = data;
            first->prev = NULL;
            first->next = NULL;

            last = first;

            /*
             * Create rest of the n-1 nodes
             */
            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("ENTER DATA OF %d NODE: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; 
                    newNode->next = NULL;

                    last->next = newNode; 
                    last = newNode;         
                }
                else
                {
                    printf("UNABLE TO ALLOCATE THE MEMORY");
                    break;
                }
            }

            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO ALLOCATE THE MEMORY");
        }
    }
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
    printf("\n");
}
void insertionatbeginning(struct node *p){
    struct node *t;
    int x;
    t=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE ELEMENT YOU WANT TO INSERT AT THE BEGINNING");
    scanf("%d",&x);
    t->data= x;
    t->prev= NULL;
    t->next = first;
    first->prev= t;
    first = t;
}
void insertionatanyplace(struct node *p){
    struct node *t;
    int x,index;
    t=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE ELEMENT YOU WANT TO INSERT ");
    scanf("%d",&x);
    printf("ENTER THE INDEX YOU WANT TO INSERT");
    scanf("%d",&index);
    t->data = x;
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    t->next=p->next;
    t->prev=p;
    if(p->next!= NULL){
        p->next->prev=t;
    }
    p->next=t;
}
void insertionatend(struct node *p,int n){
    struct node *t;
    int x,index;
    t=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE ELEMENT YOU WANT TO INSERT AT THE END");
    scanf("%d",&x);
    
    t->data = x;
    for(int i=0;i<n-1;i++){
        p=p->next;
    }
    t->next=p->next;
    t->prev=p;
    if(p->next!= NULL){
        p->next->prev=t;
    }
    p->next=t;
}
void deletionatbeginning(struct node *p){
    int x;
    p=first;
    first=first->next;
    x=p->data;
    free(p);
    if(first!=NULL){
        first->prev= NULL;
    }
}
void deletionatanyplace(struct node *p){
    int index,x;
    printf("ENTER THE INDEX OF WHERE YOU WANT TO DELETE THE ELEMENT");
    scanf("%d",&index);
    for(int i=0;i<index;i++){
        p= p->next;
    }
    p->prev->next= p->next;
    if(p->next!= NULL){
        p->next->prev = p->prev;
    }
    x=p->data;
    free(p);
}
void deletionatend(struct node *p){
    int index,x;
    printf("ENTER THE INDEX OF WHERE YOU WANT TO DELETE THE ELEMENT");
    scanf("%d",&index);
    for(int i=0;i<index;i++){
        p= p->next;
    }
    p->prev->next= p->next;
    if(p->next!= NULL){
        p->next->prev = p->prev;
    }
    x=p->data;
    free(p);
}
int main(){
    int n,j,v,check;
    printf("ENTER THE NUMBER OF NODES");
    scanf("%d",&n);
    createlist(n);
    j : 
     printf("\nFunctions that this program has :  ");
	    printf("\n1. Insertion at the end");
	    printf("\n2. Insertion at the beginning");
	    printf("\n3. Insertion at nth position ");
	    printf("\n4. Deletion at the end");
	    printf("\n5. Deletion at nth position.");
	    printf("\n6. Deletion at the beginning");
	    printf("\n7. Display of the linked list");
	    printf("\nChoose what functions you want to execute (1-7) : ");
	    scanf("%d",&v);
	    switch(v)
	    {
	        
	        case 1 : insertionatend(first,n);
	                 break;
	        case 2 : insertionatbeginning(first);
	                 break;
	        case 3 : insertionatanyplace(first);
	                 break;
	        case 4 : deletionatend(first);          
	                 break;
	        case 5 : deletionatanyplace(first);          
	                 break;
	        case 6 : deletionatbeginning(first);          
	                 break;
	        case 7 : display(first);
	                 break;
	    }
	    
	    printf("\nDO YOU WANT TO PERFORM MORE OPERATION? (y/n): ");
	    printf("IF YES PRESS 1 AND IF NO PRESS 2");
	    while(1){
	        scanf("%d",&check);
	        if(check==1){
	            goto j;
	        }
	        else{
	            break;
	        }
	    
	    
	    }

	    
     
   
    
   
}

