#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("*\n");
	int i;
	for(i = 2; i < n; i++){
		printf("*");
		int j;
		if(i >= 3){
			for(j = 1; j < i-1; j++){
				printf("-");
			}
		}
		printf("*\n");
	}
	for(i = 0; i < n; i++){
		printf("*");
	}
}
