#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m;
	int totalsales = 0;
	printf("Enter the number of days:\n");
	scanf("%d",&n);
	int *days = malloc(n * sizeof(int));
	if(!days){
	    printf("Memory allocation failled!\n");
	    return 1;
	}
	
	printf("Enter the data of each day:\n");
	for (int i=0; i<n;i++){
		printf("day%d: ",i+1);
		scanf("%d",&days[i]);
		
	}
	for(int i=0; i<n;i++){
		totalsales += days[i];
	}
	printf("The total sales for the given days are : %d\n",totalsales);
	
	printf("Enter the number of days you want to extend data: ");
    scanf("%d",&m);
	int *temp = realloc(days, (m+n) * sizeof(*days));
	if(!temp){
	    printf("Memory allocation failed!\n");
	    free(days);
	    return 1;
	}
	days = temp;
	
	printf("Enter the data for remaining days :\n");
	for (int j=0; j<m; j++){
		printf("day%d: ",n+j+1);
		scanf("%d",&days[n+j]);
		
	}
	totalsales = 0;
	for(int i=0; i<m+n;i++){
		totalsales += days[i];
	}
	printf("The total sales for the given days are : %d",totalsales);
	free(days);
}