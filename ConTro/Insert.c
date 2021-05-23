#include <stdio.h>

void Insert(int x, int p, int A[], int *pn){
	int i;
	int n = *pn;
	for(i = n; i >= p; i--){
		A[i] = A[i-1];
	}
	A[p] = x;
	n++;
	*pn = n;
}

int main(){
	int a[] = {1, 5, 2, 0};
	int n =sizeof(a)/sizeof(int);
	int x,i,p;
	x=100;
	p=2;
	Insert(x,p,a, &n);
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
}
