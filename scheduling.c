#include<stdio.h>
void main(){
int limit,tot_wt,tot_tat;
printf("enter the no of process:");
scanf("%d",&limit);
int process[limit],bt[limit],wt[limit],tat[limit];
printf("Enter the process and the corresponding burst time:\n");
for(int i=0;i<limit;i++){
scanf("%d",&process[i]);
scanf("%d",&bt[i]);
}
printf("Process Burst_Time\n");
for(int i=0;i<limit;i++){
printf("   %d",process[i]);
printf("        %d",bt[i]);
printf("\n");
}
wt[0]=0;
tat[0]=bt[0];
printf("Process:%d\nBurst_Time:%d\nwaiting_time:0\nturn_around_time:%d\n",process[0],bt[0],bt[0]);
for(int i=1;i<limit;i++){
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
printf("--------------------\nProcess:%d\nBurst_Time:%d\nwaiting_time:%d\nturn_around_time:%d\n",process[i],bt[i],wt[i],tat[i]);
tot_wt=tot_wt+wt[i];
tot_tat=tot_tat+tat[i];
}
printf("----------------------------\n");
printf("Total TAT=%d\n",tot_tat);
printf("Total WT=%d\n",tot_wt);
printf("average TAT=%d\n",(tot_tat/limit));
printf("average WT=%d\n",(tot_wt/limit));
}

