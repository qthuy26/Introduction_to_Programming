#include <stdio.h>

int main(){
	int n, cnt;
	scanf("%d", &n);
	int A[n];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &A[i]);
		printf("%d ", A[i]);
	}

	for(i = 0; i < n; i++)
		if(A[i] % 2 != 0)
			cnt++;
	printf("\n%d\n", cnt);
	for(i = 0; i < n; i++)
		if(A[i] % 2 != 0)
			printf("%d ", A[i]);
}
