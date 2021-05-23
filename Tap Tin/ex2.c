#include <stdio.h>


int main(){
	FILE *fptr = fopen("hello.txt", "r");
	if(fptr == NULL){
		printf("Errors");
		return 1;
	}
	int i;
	int a;
	float b;
	fscanf(fptr, "%d%f", &a, &b);
	fclose(fptr);
	printf("%d %.1f", a, b);
	return 0;
}
