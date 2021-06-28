#include <stdio.h>

int sumArray(int A[], int n){
    if(n == 0)
        return 0;
    else
        return A[n-1] + sumArray(A, n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("%d", sumArray(A, n));
}
