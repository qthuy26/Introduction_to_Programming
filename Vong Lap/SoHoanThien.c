#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, s = 0;
	for(i = 1; i <= n/2; i++){
		if(n % i == 0){
			s += i;
		}
	}
	if(s == n)
		printf("YES");
	else
		printf("NO");
}
