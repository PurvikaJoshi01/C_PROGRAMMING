// basic salary program-wap to enetr the basic salary of an employee.his da is 40% of bs.hra is 20% of bs and pf is 12%. calculate gross salary.(gs=bs+hre+da+pf)
#include<stdio.h>
main(){
    float bs,da,hra,pf,gs; // 
    printf("enter the basic salary");
    scanf("%f",&bs);
    da=bs*0.40;
    hra=bs*0.20;
    pf=bs*0.12;
    printf("da is %f",da);
    printf("hra is %f",hra);
    printf("pf is %f",pf);
    gs=bs+hra+da+pf;
    printf("gs is %f",gs);
}