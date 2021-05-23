#include <stdio.h>

typedef struct {
	double image, real;
} Complex;

int main(){
	Complex c = {5, 7};
	FILE *fptr;
	fptr = fopen("complex.bin", "wb");
	if(!fptr){
		printf("Error");
		return 1;
	}
	fwrite(&c, sizeof(c), 1, fptr);
	fclose(fptr);
	return 0;
}
