#include<stdio.h>
void main()
{
	//process Arrival time  burst time
    //P1         0.0           8
	//P2         0.4           4
	//P3         1.0           1
	//nonpreemtive
	int n=3,i,id[3]={1,2,3},bt[3]={8,4,1},sum2;
	float at[3]={0.0,0.4,1.0},wavg=0;
	
	printf("Process | Arival | Burst Time");
	for(i=0;i<3;i++)
	{printf("\n   %d    |  %0.1f   |    %d",id[i],at[i],bt[i]);}
	
	
	

	//What is the average turnaround time for these processes with the FCFS scheduling algorithm?
    int ct[3];
    ct[0]=bt[0];
	for(i=0;i<3;i++)
	{
		ct[i]=ct[i-1]+bt[i];
		}
	
	float TAT[3],avgtat=0;
	for(i=0;i<3;i++)
	{
		TAT[i]=ct[i]-at[i];
		avgtat+=TAT[i];
	}
	
	printf("\nProcess | Arival | Burst Time | compile time | Turn around time");
	for(i=0;i<3;i++)
	{printf("\n   %d    |  %0.1f   |    %d       |      %d      |      %0.1f",id[i],at[i],bt[i],ct[i],TAT[i]);}
	avgtat/=3;
	printf("\n\n Average Turn around time: %f",avgtat);
	
	//What is the average turnaround time for these processes with the SJF scheduling algorithm?
	int ct2[3]={8,13,9};
	float TAT2[3],avgtat2=0;
	for(i=0;i<3;i++)
	{
		TAT2[i]=ct2[i]-at[i];
		avgtat2+=TAT2[i];
	}
	
	printf("\nProcess | Arival | Burst Time | compile time | Turn around time");
	for(i=0;i<3;i++)
	{printf("\n   %d    |  %0.1f   |    %d       |      %d      |      %0.1f",id[i],at[i],bt[i],ct[i],TAT2[i]);}
	avgtat2/=3;
	printf("\n\n Average Turn around time: %f",avgtat2);
	//Compute what average turnaround time will be if the CPU is left idle for the first 1 unit 
	//and then SJF scheduling is used. Remember that processes P1 and P2 are waiting during
   //this idle time, so their waiting time may increase.
   int ct3[3]={14,4,2};
	float TAT3[3],avgtat3=0;
	for(i=0;i<3;i++)
	{
		TAT3[i]=ct3[i]-at[i];
		avgtat3+=TAT3[i];
	}
	
	printf("\nProcess | Arival | Burst Time | compile time | Turn around time");
	for(i=0;i<3;i++)
	{printf("\n   %d    |  %0.1f   |    %d       |      %d      |      %0.1f",id[i],at[i],bt[i],ct[i],TAT3[i]);}
	avgtat2/=3;
	printf("\n\n Average Turn around time: %0.1f",avgtat3);
	
		
}

