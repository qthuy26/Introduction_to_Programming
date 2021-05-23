#include <stdio.h>
#include <stdlib.h>

int *getSequence(int n, int d){
	int *a;
	a = (int*)malloc(n*sizeof(int));
	a[0] = 1;
	int i ;
	for(i = 1; i < n; i++){
		a[i] = a[i-1] + d;
	}
	return a;
}

int main(){
	int *a;
	int n=5, d=2;
	int i;
	a=getSequence(n,d);
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
	free(a);
}
