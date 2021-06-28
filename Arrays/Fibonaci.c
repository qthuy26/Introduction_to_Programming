#include <stdio.h>

void getFibo(int A[], int n){
	int i;
	A[0] = 0;
	A[1] = 1;
	for(i = 2; i <= n; i++)
		A[i] = A[i-1] + A[i-2];
}

int main(){
	int A[50];
	int i,n;
	n=10;
	getFibo(A,n);
	for(i=0;i<=n;i++)
	    printf("%d ",A[i]); 
}
