#include <stdio.h>

int C(int n, int k){
	if(k == 0 || k == n)
		return 1;
	else{
		return C(n-1, k-1) + C(n-1, k);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for(i = 0; i <= n; i++){
		for(j = 0; j <= i; j++){
			printf("%5d", C(i, j));
		}
		printf("\n");
	}
	return 0;
}
