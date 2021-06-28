#include <stdio.h>

typedef struct {
	double Real, Image;
} Complex;

void add(Complex c1, Complex c2, Complex *pC){
	pC->Real = c1.Real + c2.Real;
	pC->Image = c1.Image + c2.Image;
}

Complex readComplex(){
	Complex a;
	scanf("%lf%lf", &a.Real, &a.Image);
	return a;
}

void printComplex(Complex a){
	printf("%.3lf + i%.3lf\n",a.Real,a.Image);
}

int main(){
	Complex c1 = {10,15};
	Complex c2 = {2,3}; 
	Complex c; 
	printComplex(c1); 
	printComplex(c2); 
	add(c1,c2,&c); 
	printComplex(c);
}
