#include <stdio.h>
#include <stdlib.h>

int main(){
	int *bt, *pr, n, temp, i, j, avgwt, avgtat, pos;

	bt = (int *)malloc(sizeof(int));
	pr = (int *)malloc(sizeof(int));
	int ans = 1;
	n  =0;
	while(ans == 1){
		printf("Enter %d process BT  \n", n+1);
		scanf("%d", &bt[n]);
		n++;
		bt = (int *)realloc(bt, sizeof(int)); 
		printf("continue?? \n");
		scanf("%d", &ans);

	}
	int tat[n-1], wt[n-1], p[n-1];
	for(i=0; i<n; i++)
		p[i] = i+1;
	

	//sort 
	for(i =0; i<n; i++){
		pos	= i;
 		for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }

		temp = bt[i];
		bt[i] = bt[pos];
		bt[pos] = temp;

		temp = p[i];
		p[i] = p[pos];
		p[pos] = temp;
	}

	wt[0] = 0;
	for(i=1; i<n; i++){
		wt[i] = 0;
		for(j=0; j<i; j++){
			wt[i] += bt[j];
		}
		avgwt += wt[i];		
	}
	avgwt = avgwt/i;
	for(i=0; i<n; i++){
		tat[i] = wt[i] + bt[i];
		printf("\n %d \t\t  %d\t\t   %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
	}

}