 //Store ‘n’ numbers (integers or real) in an array. Conduct a linear search for a given number and report success or failure in the form of a suitable message.
#include <stdio.h>
void main()
{
    int x[10];
    int l, j, w, m = 0;
    printf("\n Enter value of j\n");
    scanf("%d", &j);
    printf("\n Requesting you to please enter the elements\n");
    for (l=0;l<j;l++)
    {
        scanf("%d", &x[l]);
    }
    printf("the array we got");
    for (l=0;l<j;l++)
    {
        printf("%d",x[l]);
    }

    printf("\n Requesting you to enter the element which you need to find\n");
    scanf("%d", &w);
    for (l=0;l<j;l++)
    {
        if (w==x[l])
        {
            m=1;
            break;
        }
    }
    if (m==1)
        printf("\n successful search");
    else
        printf("\n unsuccessful search");
}

