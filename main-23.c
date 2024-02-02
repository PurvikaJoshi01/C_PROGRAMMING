#include<stdio.h>
main(){
    int i,n,r,f,num;
    
    
    for(i=1;i<=500;i++)
    
    {
        num=i;
        n=0;
    while(num>0){
        f=num%10;
        n=(f*f*f)+n;
       num=(int)(num/10);
        
    }
    if (n==i)
    printf("\n%d",i);
    
    }
    
    
}