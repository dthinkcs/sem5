#include<stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pr
{
	int pid;
	int bt;
	int at;
	int tat;
	int pri;
}P;
int max_pri =0, n;

void sort(P pr[n]){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=0; i<n-i-1; j++){
			if(pr[j].at > pr[j+1].at){
				P temp = pr[j];
				pr[j] = pr[j+1];
				pr[j+1] = temp;
			}
		}
	}
}
int high_pr(P pr[n], int cur_time, int flag[n]){
	int index = 0;
	int high_pr = max_pri;
	for(int i=0; i<n; i++){
		if(cur_time > pr[i].at && high_pr >= pr[i].pri && !flag){
			index = i;
			high_pr = pr[i].pri;
		}
	}
	flag[index]=1;
	return index;
}
int main(){
    int avgwt=0, avgtat=0, tot=0;
    printf("Process ?\n");
    scanf("%d", &n);
    P pr[n];
    int i, j;
    printf("Matrix\n");
    for(i=0; i<n; i++){
        scanf("%d %d %d %d",&pr[i].pid, &pr[i].at, &pr[i].bt, &pr[i].pri);
        tot += pr[i].bt;
        if(max_pri < pr[i].pri)
        	max_pri = pr[i].pri;
    }

    sort(pr);
 
    int index =0;
    int gantt[n][3], flag[n];
    memset(flag, 0, sizeof(flag));
    int cur_time =0;
    i=0;
    printf("Gantt chart \n");
    while(tot - cur_time){
    	index = high_pr(pr, cur_time, flag);
    	printf("%d\t%d\t%d\t\n", pr[gantt[i++][0]=index].pid, gantt[i][1] = cur_time - pr[index].bt, gantt[i][2] = cur_time += pr[index].bt);
    }

    int time[n][3];
    index = 0;
    printf("WT \t TAT\n");
    for(i=0;i<n;i++){
    	index = gantt[i][0];
    	time[index][0] = index;
    	time[index][2] = gantt[i][2] - pr[index].at;
    	time[index][1] = time[index][2] - pr[index].bt;
    }
    for(i=0; i<n; i++)
    	printf("%d\t%d\t%d\t\n", pr[time[i][0]].pid, time[i][1], time[i][2] );
}

