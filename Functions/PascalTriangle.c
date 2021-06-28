#include <stdio.h>

void pascalTriangle(int n, long long int A[n][n]){
	int i, j;
	long long int c = 1;
	for(i = 0; i < n; i++)
		for(j = 0; j <= i; j++){
			if(j == 0 || j == i)
				c = 1;
			else
				c = c*(i-j+1)/j;
			A[i][j] = c;
 		}
}

void printArray(int n, long long int A[n][n]){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++)
			printf("%lld ", A[i][j]);
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	long long int A[n][n];
	pascalTriangle(n, A);
	printArray(n, A);
}
