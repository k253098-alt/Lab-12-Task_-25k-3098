#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int *arr = malloc ( n * sizeof(int));
	printf("Enter the elements of array:\n");
	for(int i =0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<n; j++){
		printf("%d ",arr[j]);
		
	}
	arr = realloc(arr, 2 * n * sizeof(int));
	printf("\nEnter the remaining elements :\n");
	for(int i=n; i<2*n; i++){
	    scanf("%d",&arr[i]);
	}
	printf("The updated array is :\n");
	for(int i =0; i<2*n;i++){
	    printf("%d ", arr[i]);
	    
	}
	return 0;
}