#include<stdio.h>
#define max 30
main()
{
    int i,j,n,temp,p[max],bt[max],wt[max],tat[max];
    float avg_wt=0,avg_tat=0;
    printf("enter the number of process");
    scanf("%d",&n);
    printf("enter the process number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the burst time");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(bt[i+1]<bt[i])
            temp=bt[i];
            bt[i+1]=bt[1];
            bt[i+1]=temp;
        }
    }
    
    
    
    
    
}
