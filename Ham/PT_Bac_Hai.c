#include <stdio.h>
#include <math.h>

int PTBac2(float a, float b, float c, float *nghiem1, float *nghiem2){
	float delta = b*b - 4*a*c;
	if(delta < 0)
		return 0;
	else if(delta == 0){
		*nghiem1 = -b/(2*a);
		return 1;
	}
	else{
		*nghiem1 = (-b-sqrt(delta))/(2*a);
		*nghiem2 = (-b+sqrt(delta))/(2*a);
		return 2;
	}
}

int main(){
	float a, b, c, ngh1, ngh2;
	scanf("%f%f%f", &a, &b, &c);
	int so_n = PTBac2(a, b, c, &ngh1, &ngh2);
	if(so_n == 0)
		printf("VO NGHIEM");
	else if(so_n == 1)
		printf("NGHIEM KEP\nx = %.2f", ngh1);
	else
		printf("NGHIEM PHAN BIET\nx1 = %.2f\nx2 = %.2f", ngh1, ngh2);
	return 0;
}
