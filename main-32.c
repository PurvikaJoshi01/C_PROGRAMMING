#include<stdio.h>
main(){
    int i,n,f;
    f=0;
    n=7;
    for(i=2;i<n;i++){
        if(n%i==0){
       f=0;
        break;
        }
        else
       f=1;
    }
    if (f==0)
    printf("it is not a prime number");
    else 
    printf("it is a prime number");
}
