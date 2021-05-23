#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int i;
    if(n < 2)
        return 0;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
        	return 0;
	return 1;
}

int countPrimeNumbers(int a, int b){
	int i, cnt = 0;;
	for(i = a; i <= b; i++)
		if(isPrime(i))
			cnt++;
	return cnt;
}

void printPrimeNumbers(int a, int b){
	int i;
	for(i = a; i <= b; i++)
		if(isPrime(i))
			printf("%d ", i);
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", countPrimeNumbers(a, b));
	printPrimeNumbers(a, b);
}
