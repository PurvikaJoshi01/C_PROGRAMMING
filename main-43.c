#include<stdio.h>
#define max 30
main(){
    int i,j,n,p,temp,wt[max],pos,tat[max],ct[max],pr[max];
     float avg_wt=0,avg_tat=0;
    printf("enter the number of process");
    scanf("%d",&n);
    printf("enter the burst time");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }   
    
    printf("enter the process pri\][priority");
    for(i=0;i<n;i++)
    {
      scanf("%d",&pr);  
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
            {
                pos=j
            }
        }
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
        
    }
    
}


