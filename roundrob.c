#include<stdio.h>
void main()
{
printf("Enter the number of processes \n");
int limit;
scanf("%d",&limit);

int process[limit],bt[limit],rembt[limit],wt[limit],tat[limit],pri[limit];
for(int i=0;i<limit;i++){
printf("Enter the process number :\n");
scanf("%d",&process[i]);
printf("Enter the burst time\n");
scanf("%d",&bt[i]);
rembt[i]=bt[i];
}
int tq;
printf("Enter the time quantum :\n");
scanf("%d",&tq);
int t=0;
while(1){
int done=1;
for(int i=0;i<limit;i++){
if(rembt[i]>0){
done=0;
if(rembt[i]>tq){
t=t+tq;
rembt[i]=rembt[i]-tq;
}
else{
t=t+rembt[i];

wt[i]=t-bt[i];
rembt[i]=0;
}
}
}
if (done ==1)
break;
}
for(int i=0;i<limit;i++)
tat[i]=bt[i] + wt[i];
printf("Process Burst Waiting Turnaround\n");
for(int i=0;i<limit;i++)
printf("%d\t%d\t%d\t%d\n",process[i],bt[i],wt[i],tat[i]);
float avgwt=0,avgtat=0;
for(int i =0;i<limit;i++){
avgwt+=wt[i];
avgtat+=tat[i];
}
avgwt/=limit;
avgtat/=limit;
printf("Average waiting Time :%f\n",avgwt);
printf("Average Turnaround Time :%f\n",avgtat);
}





