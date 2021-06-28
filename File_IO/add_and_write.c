#include <stdio.h>

struct Complex {
	float real, image;
};

void add_and_write(FILE *f, struct Complex a, struct Complex b){
    struct Complex c;
    c.real = a.real + b.real;
    c.image = a.image + b.image;
    fwrite(&c, sizeof(struct Complex), 1, f);
}

int main(){
	FILE *f;
	f = fopen("add_and_write.bin", "wb");
	struct Complex a = {1, 2.1};
	struct Complex b = {3, 2.05};
	struct Complex c;
	add_and_write(f, a, b);
	fclose(f);
	return 0;
}
