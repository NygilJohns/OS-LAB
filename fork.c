#include<stdio.h>
#include<unistd.h>
void main(){
int pd,limit,i,num;
pd=fork();
if(pd==0){
printf("Child process\n");
 printf("Process id =%d\n",getpid());
 printf("Parent's ID=%d\n",getppid());
 printf("Enter a limit");
 scanf("%d",&limit);
 for(i=1;i<=limit;i++){
 printf("%d\n",i);
 }
 }
 else if(pd>0){
 wait();
 printf("Parent Process\n");
 printf("Parent's ID=%d\n",getppid());
 printf("Enter a number :");
 scanf("%d",&num);
 if(num%2==0){
 printf("The number is even\n");
 }
 else{
 printf("The number is odd\n");
 }
 }
 else{
 printf("Fork Failed\n");
 }}
