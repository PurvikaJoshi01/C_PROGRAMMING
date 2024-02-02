//An Insurance company follows following rules to calculate premium.
//(1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.
//(2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
//(3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
//(4) In all other cases the person is not insured.

#include<stdio.h>

main(){
    int age,premium;
    long int policy_amt;
    char health,location,sex;
    printf("enter age");
    scanf("%d",&age);
    printf("enter \n sex(m/f)\n  location(c/v) \n health(e/p)");
    scanf("%c\n%c\n%c\n",&sex,&location,&health);
    
    
    
    if((health=='e') && (age>=25 && age<=35) && (location=='c') && (sex=='m'))
    {
        printf("insured");
        printf("premium=Rs.4 per 1000");
        printf("policy_amt= Rs.2,00,000");
        
    }
    else if (health=='e' && (age>=25 && age<=35) && location=='c' && sex=='f')
    {
        printf("insured");
        printf("premium=Rs.3 per 1000");
        printf("policy_amt= Rs.1,00,000");
    }
    else if (health=='p' && (age>=25 && age<=35) && location=='v' && sex=='m')
    {
        printf("insured");
        printf("premium=Rs.6 per 1000");
        printf("policy_amt= Rs.10,000");
    }
    else 
        printf("not insured");
        
    
}




