#include<stdio.h>
void mergesort(int a[], int i, int j);
void mergearray(int a[], int i1, int j1, int i2, int j2);

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int a[], int low, int high)
{
    int pivot = a[high];   
    int i = (low - 1);  
    int j;
    for ( j = low; j <= high- 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;    
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}
 
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
 
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main(){
	int n,i;
	printf("enter size of array");
	scanf("%d", &n);
	int a[n];
	printf("enter array \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		printf("%d  ", a[i]);
	}
	int ch;
	printf("\n 1. merge sort 2. quick sort \n");
	scanf("%d", &ch);
	switch(ch){
	case 1:
		mergesort(a, 0, n-1);
		
		printf("\n merge sorted array");	
		for(i=0; i<n; i++){
			printf("%d  ", a[i]);
		}
		break;
	
	case 2:
		quickSort(a, 0, n-1);
		for(i=0; i<n; i++){
			printf("%d  ", a[i]);
		}
}
printf("\n");		
return 0;
}

void mergesort(int a[], int i, int j){
	int mid;
	if(i<j){
		mid = (i+j)/2;
		mergesort(a, i, mid);
		mergesort(a, mid+1, j);
		mergearray(a, i, mid, mid+1, j);
	}
}
void mergearray(int a[], int i1, int j1, int i2, int j2){
	int i, j, k=0;
	int temp[50];
	i = i1;
	j = i2;
	while(i<=j1 && j<=j2){
		if(a[i]<a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}		
	while(i<=j1)
		temp[k++] = a[i++];
	while(j<=j2)
		temp[k++] = a[j++];

	for(i=i1, k=0; i<=j2; i++, k++)
		a[i] = temp[k];
}




