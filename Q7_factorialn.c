#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("the value of n is:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("%d",f);
    
}