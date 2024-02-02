#include<stdio.h>
int main(){
    int i,n,value;
    float s=0.0;
    printf("value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<n){
            printf("1/%d + ",i);
            s=s+1/(float)i;
        }
        else{
            printf("1/%d",i);
            s=s+1/(float)i;
        }    
    }
     printf("\nThe sum is:%f",s);

}