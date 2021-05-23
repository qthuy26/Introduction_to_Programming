#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int A[n], i;
	for(i = 0; i < n; i++){
		scanf("%d", &A[i]);
		printf("%d ", A[i]);
	}
	int tong = 0;
	for(i = 0; i < n; i++)
		tong += A[i]*A[i];
	printf("\n%d", tong);
	return 0;
}
