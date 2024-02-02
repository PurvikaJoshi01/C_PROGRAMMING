//insert an element to a position.
#include<stdio.h>
int main()
{
    int a[20];
    int p,i,r,s;                // s is size
    printf("s of array is=\n"); //size of array
    scanf("%d",&s);
    printf("Enter %d array elements=\n",s);
    for(i=0;i<s;i++)           //entering elements inside array
    {
        scanf("%d",&a[i]);
    }
    printf("Current array= ");   //printing array
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter an element to insert=\n"); //element to insert
    scanf("%d",&p);
    printf("Enter position for element %d=\n",p); //position of new element
    scanf("%d",&r);
    r=r-1;
    for(i=s-1;i>=r;i--)
    {
        a[i+1]=a[i];
    }
    a[r]=p;
    printf("\nNew array= ");
    for(i=0;i<s+1;i++)           //printing new array
    {
        printf("%d ",a[i]);
    }
    return 0;
}
