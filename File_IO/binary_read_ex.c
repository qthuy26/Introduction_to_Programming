#include <stdio.h>

typedef struct {
	double image, real;
} Complex;

int main(){
	Complex c = {5, 1};
	FILE *fptr;
	fptr = fopen("complex.bin", "rb");
	if(!fptr){
		printf("Error");
		return 1;
	}
	fread(&c, sizeof(c), 1, fptr);
	printf("%.1lf %.1lfi", c.image, c.real);
	fclose(fptr);
	return 0;
}
