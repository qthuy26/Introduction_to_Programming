#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float v = a + b + c;
	float p = v/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi: %.2f\n", v);
	printf("Dien tich: %.2f", s);
	return 0;
}
