#include<stdio.h>
main()
{
    int a,b,c;
    char o;                           //o is operator
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the operator");
    scanf("%s",&o);
    if(o=='+')
    {c=a+b;
    printf("sum is=%d",c);
    }
    else if (o=='-')
    { c=a-b;
    printf("the difference is=%d",c);
    }
    else if(o=='*')
    { c=a*b;
    printf("the product is=%d",c);
    }
    else if (o=='/')
    { c=a/b;
    printf("division is=%f",c);
    }
    else
    printf("invalid operator");
    
}
