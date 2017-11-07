#include <stdio.h>
#include <stdlib.h>
int main(){
 int *bt;
 bt=(int *)malloc(sizeof(int)); 
int ans = 0;

int n=0;
while(ans != 1){
 	scanf("%d", &bt[n]);
 	n ++ ;
 	printf("allocating \n");
 	bt = (int *)realloc(bt, sizeof(int)); 
 	printf("ans \n");
 	scanf("%d", &ans);
}
int i;
for(i =0; i<n ;i++){
	printf("%d \n", bt[i]);
}

}