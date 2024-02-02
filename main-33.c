#include<stdio.h>
main(){
    int i,n,f,j;
    f=0;
    n=7;
    for(j=2;j<=300;j++){
    for(i=2;i<j;i++){
        if(j%i==0){
       f=0;
        break;
        }
        else
       f=1;
    }
    if (f==1)
    printf(" %d",j);
    
    }
}
