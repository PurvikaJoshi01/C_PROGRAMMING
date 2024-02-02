//priority scheduling
#include<stdio.h>
int main(){
int n,i,j,bt[10],tat[10],wt[10],ct[10],temp[10],pr[10];
printf("enter no of processs");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter burst time-");
    scanf("%d",&bt[i]);
}
for(i=0;i<n;i++){
    printf("enter priority");
    scanf("%d",&pr[i]);
} 
for(i=0;i<n;i++)
    {
       int  pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp==pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp==bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        
    }
    wt[0]=0; //waiting time for first process is zero
 
    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;      //average waiting time
    total=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
 
return 0;
}