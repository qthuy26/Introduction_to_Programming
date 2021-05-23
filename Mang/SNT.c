#include <stdio.h>
#include <math.h>

int SNT(int n){
	int i;
	if(n < 2)
		return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int Count(int A[], int n){
	int i, cnt = 0;
	for(i = 0; i < n; i++){
		if(SNT(A[i]))
			cnt++;
	}
	return cnt;
}

void In_SNT(int A[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(SNT(A[i]))
			printf("%d ", A[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &A[i]);
		printf("%d ", A[i]);
	}
	printf("\n%d\n", Count(A, n));
	In_SNT(A, n);
}
