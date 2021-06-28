#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 2; i <= n; i++){
		int flag = 0;
		int j;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				flag = 1;
			}
		}
		if(flag == 0)
			printf("%d ", i);
	}
}
