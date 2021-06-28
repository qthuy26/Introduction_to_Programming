#include <stdio.h>

void write_binary(FILE *f, int x){
    fwrite(&x, sizeof(x), 1, f);
}

int main(){
	FILE *f;
	f = fopen("write_binary.bin", "wb");
	int x = 20;
	write_binary(f, x);
	fclose(f);
	return 0;
}
