#include<stdio.h>
int main(){
    int a,b,c;
    printf("values of a,b,c are ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("%d = a is greatest",a);
        else if(a==c)
            printf("%d = a and %d = c are equally geatest",a,c);
        else
            printf("%d = c is greatest",c);
    }
    else if(a==b){
        if(c>a)
            printf("%d = c is greatest",c);
        else if(a>c)
            printf("%d = a and %d = b are equally greatest",a,b);
        else
            printf("all %d = a, %d = b and %d = c are equally greatest",a,b,c);
    }
    else if(b>a){
        if(b>c)
            printf("%d = b is greatest",b);
        else if(b==c)
            printf("%d = b and %d = c are equally greatest",b,c);
        else
            printf("%d = c is greatest",c);
    }
    else
        printf("%d = c is greatest",c);
}
