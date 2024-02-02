#include<stdio.h>
#include<math.h>
int main(){
    int i,n,j,s=0;
    printf("The value of n is :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<n){
            j=pow(10,i)-1;
            printf("%d + ",j);
            s=s+j;
        }
        else if(i==n){
            j=pow(10,i)-1;
            printf("%d",j);
            s=s+j;
        }
    }
    printf("\nThe sum is:%d",s);
}