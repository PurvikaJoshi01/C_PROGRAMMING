#include <stdio.h>
#include <string.h>
 union details       //union declaration
 {
	char product[25];  // member declare
	int qty;
	float price;
	
 };
 union details item[30];   //object
int main(){
   int n,a;             //variable declare
    char b[30];
    float total=0;
   float p;
 printf("enter number of product: ");      
 scanf("%d", &n);
  for(int i=0; i<n; i++){   //to enter multiple products
    printf("product: ");
    scanf("%s",item[i].product);
    strcpy(b,item[i].product);
    printf("quantity: ");
    scanf("%d", &item[i].qty);
    a=item[i].qty;
    printf("item price: ");
    scanf("%f", &item[i].price);
    p=item[i].price;
    total= total + p*a;
  }
  
 
    
 //printing details:
 printf("\nPrinting Details\n\n");
    for(int i = 0; i <n;i++){
        printf("Item Name: %s\n", b);
        printf("Quantity: %d\n",a);
        printf("Price: %.3f",p);
        printf("\n");
     
    }
    
    printf("Total : %f",total);
}