#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int r;
	while(b != 0){
		r = a%b;
		a = b;
		b = r;
	}
	printf("%d", a);
	return 0;
}
