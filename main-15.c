//The distance between two cities (in km.) is input through the keyboard. 
//Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include<stdio.h>
main(){
    float km,mr,ft,in,cn; //a is distance between two cities
    printf("enter the distance in km");
    scanf("%f",&km);
    mr=km*1000;
    ft=km*3.3;
    in=km*39;
    cn=km*180;
    printf("\n distance in m is %f",mr);
    printf("\n distance in ft is %f",ft);
    printf("\n distance in in is %f",in);
    printf("\n distance in cn is %f",cn);
    
}