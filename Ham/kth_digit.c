#include <stdio.h>

int kth_digit(int n, int k){
	if(k == 0)
		if(n == n%10)
			return n%10;
		else
			return 0;
	else
		return kth_digit(k-1, n/10);
}

int main(){
	printf("%d", kth_digit(16423, 6));
}
