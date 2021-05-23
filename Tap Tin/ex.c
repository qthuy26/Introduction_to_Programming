#include <stdio.h>

int main(){
	FILE *fptr;
	int n = 100;
	int i;
	int a = 4;
	float b = 2.3;
	fptr = fopen("hello.txt", "a");
	fprintf(fptr, "%d %f", a, b);
	fclose(fptr);
	return 0;
}
