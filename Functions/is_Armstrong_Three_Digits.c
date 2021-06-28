#include <stdio.h>

int is_Armstrong(int n){
	int a, b, c;
	int t = n;
	c = t % 10;
	t/=10;
	b = t % 10;
	t/=10;
	a = t % 10;
	if(100*a + 10*b + c == a*a*a + b*b*b + c*c*c)
	    return 1;
	return 0;
}

int main(){
	printf("%d\n", is_Armstrong(153));
}
