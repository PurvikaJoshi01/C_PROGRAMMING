#include<stdio.h>
int main()  
{  
    int grade, grace = 0, failed;  
  
    printf("Enter the class grade\n");  
    scanf("%d", &grade);  
  
    printf("How many subjects has the student failed\n");  
    scanf("%d", &failed);  
  
    switch(grade)  
    {  
        case 1:  
                if(failed > 3)  
                    printf("grace not given");  
                else  
                    printf("grace is %d",5*failed);  
                    break;  
  
        case 2:  
                if(failed > 2)  
                    printf("grace not given");  
                else  
                    printf("grace is %d",4*failed);  
                    break;
         
         
        case 3:  
                if(failed > 1)  
                    printf("grace not given");  
                else  
                    printf("grace is %d",5*failed);
                    break;
         default:
                 printf("wrong grade");
   }  
  
    
}          
  