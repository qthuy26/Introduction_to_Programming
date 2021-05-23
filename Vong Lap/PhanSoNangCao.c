#include <stdio.h>

int main(){
	float s;
	scanf("%f", &s);
	float tong = 1.0;
	int n = 1;
	while(tong <= s){
		tong = tong + (float)1/(n+1);
		n++;
	}
	printf("%d", n);
}
