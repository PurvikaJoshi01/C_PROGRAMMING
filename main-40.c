#include<stdio.h>
#define max 30
main(){
    int i,j,n,temp,bt[max],at[max],wt[max],tat[max],ct[max];
    printf("enter the number of process");
    scanf("%d",&n);
    printf("enter the burst time");
    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);
        printf("enter the arival time");
    for(i=0;i<n;i++)
        scanf("%d",&at[i]);
    ct[0]=0;
    printf("process\tburst time\tarrival time\twaiting time\tturn around time");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        ct[i+1]=ct[i]+bt[i];
        tat[i]=ct[i+1]-at[i];
        wt[i]=tat[i]-bt[i];
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d",i,bt[i],at[i],wt[i],tat[i]);
        
        
        
        
    }
    
}
