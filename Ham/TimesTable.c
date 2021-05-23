#include <stdio.h>

void printTimesTable(int n){
	int i;
	for(i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", n, i, n*i);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d Times Table\n", n);
	printf("====================\n");
	printTimesTable(n);
}
