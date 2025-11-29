#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	printf("Enter the number of strings in array:\n");
	scanf("%d",&n);
	getchar();
	char **arr = malloc(n * sizeof(char *));
	if(arr == NULL){
	    printf("Memory allocation failed!\n");
	    return 1;
	}
	for(int i= 0; i<n; i++){
	    char temp[1000];
	    printf("Enter string %d:",i+1);
	    fgets(temp, sizeof(temp), stdin);
	    temp[strcspn(temp, "\n")] = '\0';
	    
	    arr[i] = (char *)malloc(strlen(temp) + 1);
	    if(arr[i]==NULL){
	        printf("Memory allocation failed!\n");
	        return 1;
	    }
	    strcpy(arr[i],temp);
	}
	for(int i=0; i<n; i++){
	    for(int j=i+1; j<n; j++){
	        if(strcmp(arr[i], arr[j]) > 0){
	            char *temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
	}
	printf("\nSorted strings:\n");
	for(int i=0; i<n; i++){
	    printf("%s\n", arr[i]);
	}
	free(arr);
	for (int i = 0; i < n; i++)
     free(arr[i]);
	return 0;
}