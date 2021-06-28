#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int S = 1;
	int k = 0;
	while(S < n){
		S = S*2;
		k++;
	}
	printf("%d", k);
}
