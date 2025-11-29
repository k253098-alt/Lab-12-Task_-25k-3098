#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n,p;
	printf("Enter the size of both matrics m*n and n*p:\n");
	scanf("%d %d %d",&m, &n, &p);
	
	int (*matrix)[n] = malloc(m * sizeof *matrix);
	if(!matrix){
		printf("Memory error!\n");
	}
		printf("Enter the elements of a matrix:");
	for (int i=0; i<m;i++){
		for(int j=0; j<n; j++){
			printf("Enter element [%d][%d]: ",i+1,j+1);
		    scanf("%d" ,&matrix[i][j]);
		}	
    }
    
    int (*matrix2)[p] = malloc(n *sizeof *matrix2);
    if(!matrix2){
		printf("Memory error!\n");
	}
		printf("Enter the elements of second matrix:");
	for (int i=0; i<n;i++){
		for(int j=0; j<p; j++){
			printf("Enter element [%d][%d]: ",i+1,j+1);
		    scanf("%d" ,&matrix2[i][j]);
		}	
    }
    
    int (*matrix3)[p] = malloc(m *sizeof *matrix3);
    if(!matrix3){
		printf("Memory error!\n");
	}
    for (int i=0; i<m;i++){
		for(int j=0; j<p; j++){
			matrix3[i][j]=0;
			for(int k=0; k<n;k++){
				matrix3[i][j]+= matrix[i][k]*matrix2[k][j];
			}
		}	
    }
    
    printf("Product of matrices is :\n");
    for (int i=0; i<m;i++){
		for(int j=0; j<p; j++){
			printf("%d ",matrix3[i][j]);
		}
		printf("\n");
    }
    
    free(matrix);
    free(matrix2);
    free(matrix3);
	return 0;
}