//  if else basic salary program 2
#include<stdio.h>
main(){
    float bs,da,hra,pf,gs; 
    printf("enter the basic salary");
    scanf("%f",&bs);
    if(bs<1500)
    {
    hra=bs*0.10;
    da=bs*0.9;
    pf=bs*0.12;
    
    }
    else 
    {
        hra=500;
        da=bs*0.98;
        pf=bs*12;
    printf("da is %f",da);
    printf("hra is %f",hra);
    printf("pf is %f",pf);
    
    gs=bs+hra+da+pf;
    printf("gs is %f",gs);
    }
}
