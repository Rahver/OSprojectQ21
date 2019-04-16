#include<stdio.h>


int main()
{
printf("Welcome to Round robin priority scheduling!! I hope you have fun!!");
  int ct,j,n,time,rmn,flag=0,tq; //here im declaring all variables which im gonna use in the program
  int w_t=0,tat=0,arrt[10],brrt[10],rt[10],prrt[10];  //these are arrays for arrival time, burst time, rt, priority no, etc.
  void inp() // this funcion takes values of all the process
  {
  
  printf("\n Enter Total Process:\t ");
  scanf("%d",&n);
  rmn=n;
  for(ct=0;ct<n;ct++) //this is the loop to take all input from the user
  {
    printf("Enter Arrival Time and Burst Time and priority for Process Process Number %d :",ct+1);
    scanf("%d",&arrt[ct]);
    scanf("%d",&brrt[ct]);
    scanf("%d",&prrt[ct]);
    rt[ct]=brrt[ct];
  }
  printf("Enter Time Quantum:\t");
  scanf("%d",&tq); //taking time quantum
}
 void shu() //this is the function which contains the algorithm to calculate round robin algo
 {
 
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); //after this line, all the details will be calculated and will be prind accordingly
  for(time=0,ct=0;rmn!=0;) //for loop ntil remaining time is 0 for each case!
  {
    if(rt[ct]<=tq && rt[ct]>0)
    {
      time+=rt[ct];
      rt[ct]=0;
      flag=1;
    }
    else if(rt[ct]>0)
    {
      rt[ct]-=tq;
      time+=tq;
    }
    if(rt[ct]==0 && flag==1)
    {
      rmn--;
      printf("P[%d]\t|\t%d\t|\t%d\n",ct+1,time-arrt[ct],time-arrt[ct]-brrt[ct]);
      w_t+=time-arrt[ct]-brrt[ct];
      tat+=time-arrt[ct];
      flag=0;
    }
    if(ct==n-1)
      ct=0;
    else if(arrt[ct+1]<=time)
      ct++;
    else
      ct=0;
  }
  printf("\nAverage Waiting Time= %f\n",w_t*1.0/n); //here it is calculating the averate tiem after adding all the time and dividin it by the total number of process, which is n
  printf("Avg Turnaround Time = %f",tat*1.0/n); //here it is calculating the average turn around time, which it will get ater adding all the tat time and dividing it by n
}
inp(); //here im calling the function so hat it can take vaues from the user
shu(); //here im calling the function to do its work, i.e. calculating round robin
  return 0; //program ends here
}
