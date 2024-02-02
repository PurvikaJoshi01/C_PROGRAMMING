#include<stdio.h>
int main(){
    int x,y;
    printf("enter the vaue of x :");
    scanf("%d", &x);
    printf("enter the vaue of y :");
    scanf("%d", &y);
    if(x>y){
        printf("%d is greatest",x);
    }
    else if (y>x){
        printf("%d is greatest",y);
    }
    else{
        printf("%d and %d are equal",x,y);
    }
}
