#include <stdio.h>

void factorize(int n){
	int i = 2;
	printf("%d = ", n);
	while(n != 1){
		if(n % i == 0){
			printf("%d", i);
			n /= i;
			if(n != 1)
				printf(" x ");
		}
		else
			i++;
	}
}

int main(){
	factorize(100);
}
