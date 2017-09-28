#include <stdio.h>

int bSearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return bSearch(arr, l, mid-1, x);
        return bSearch(arr, mid+1, r, x);
   }

   return -1;
}
 
int main(void)
{
   int n,i,j;
	printf("enter size of array");
	scanf("%d", &n);
	int arr[n];
	printf("enter array \n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		printf("%d  ", arr[i]);
	}
   int x;
   printf("Enter key \n");
   scanf("%d", &x);

	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
}
}
}
printf("sorted array");
for(i=0; i<n; i++){
		printf("%d  ", arr[i]);
	}

   int result = bSearch(arr, 0, n-1, x);
   
   if(result == -1)
	printf("Element is not present in array");
   else
	printf("Element is present at index %d \n", result+1);
   return 0;
}
