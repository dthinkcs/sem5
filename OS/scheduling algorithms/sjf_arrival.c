#include <stdio.h>
struct fcfs
{
int p;
int ar;
int bt;
int ct;
int wt;
int tat;
};
int main()
{
	printf("Enter number of processes\n");
	int n;
	scanf("%d",&n);
	struct fcfs f[n];
	for(int i=0;i<n;i++)
		f[i].p=i+1;
	printf("Enter arrival and burst times\n");
	for(int i=0;i<n;i++)
	scanf("%d%d",&(f[i].ar),&(f[i].bt));
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n-i-1;j++)
		{
			if(f[j].bt>f[j+1].bt)
			{
				struct fcfs temp=f[j];
				f[j]=f[j+1];
				f[j+1]=temp;
			}
		}
	}
	//waiting time
	for(int i=0;i<n;i++)
	{
		f[i].wt=0;
		for(int j=0;j<i;j++)
		{
			f[i].wt+=f[j].bt;
		}
		//printf("wait time is %d\n",f[i].wt);
	}
	//turnaround time
	float avgt=0.0,avgw=0.0;
	for(int i=0;i<n;i++)
	{
		f[i].tat=f[i].wt+f[i].bt;
		avgt+=f[i].tat;
		avgw+=f[i].wt;
	}
	f[0].ct=f[0].bt;
	for(int i=1;i<n;i++)
	{
		f[i].ct+=f[i-1].ct+f[i].bt;
	}
	avgt=avgt/n;
	avgw=avgw/n;
	printf("Process\tCompletion time\tTurnaround time\tWait time\n");

	for(int i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n",f[i].p,f[i].ct,f[i].tat,f[i].wt);
	}
	printf("Average turnaround time is %f\n",avgt);
	printf("Average waiting time is %f\n",avgw);
}