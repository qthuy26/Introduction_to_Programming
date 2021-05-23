#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for(i = n; i > 0; i--){
		for(j = i; j < n; j++){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}
