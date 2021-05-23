#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int A[n], i;
	for(i = 0; i < n; i++){
		scanf("%d", &A[i]);
		printf("%d ", A[i]);
	}
	int min = A[0], max = A[0];
	for(i = 1; i < n; i++){
		if(min > A[i])
			min = A[i];
		if(max < A[i])
			max = A[i];
	}
	printf("\n%d %d", min, max);
}
