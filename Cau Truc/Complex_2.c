#include <stdio.h>

typedef struct {
	double Real, Image;
} Complex;

Complex readComplex(){
	Complex a;
	scanf("%lf%lf",&a.Real,&a.Image);
	return a;
}

void printComplex(Complex a){
	printf("%.3lf + i%.3lf\n",a.Real,a.Image);
}

int main(){
	Complex a; 
	a = readComplex();
	printComplex(a);
}
