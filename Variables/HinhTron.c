#include <stdio.h>

int main(){
	float d;
	scanf("%f", &d);
	float r = d/2;
	float s = 3.14*r*r;
	float p = 3.14*d;
	printf("Chu vi: %.2f\n", p);
	printf("Dien tich: %.2f", s);
}
