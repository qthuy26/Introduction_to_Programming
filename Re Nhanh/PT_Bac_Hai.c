#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float delta = b*b - 4*a*c;
	if(delta < 0){
		printf("VO NGHIEM");
	}
	else if(delta == 0){
		float x = -b/(2*a);
		printf("NGHIEM KEP\nx = %.2f", x);
	}
	else{
		float x1 = (-b-sqrt(delta))/(2*a);
		float x2 = (-b+sqrt(delta))/(2*a);
		printf("NGHIEM PHAN BIET\nx1 = %.2f\nx2 = %.2f", x1, x2);
	}
}
