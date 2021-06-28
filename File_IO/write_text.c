#include <stdio.h>

void write_text(FILE *f, int a, int b){
	fprintf(f, "%d %d", a, b);
}

int main(){
	FILE *f;
	f = fopen("write_text.txt", "w");
	int a = 3, b = 2;
	write_text(f, a, b);
	fclose(f);
	return 0;
}
