#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	while(n != 0){
		n /= 10;
		count++;
	}
	printf("Number of digits: %d", count);
}
