#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int x, y;
}Point;

int main(){
	Point P;
	int i;
	FILE *f = fopen("points.bin", "rb");
	if(!f){
		printf("Error");
		return 1;
	}
	scanf("%d", &i);
	fseek(f, i*sizeof(Point), SEEK_SET);
	fread(&P, sizeof(Point), 1, f);
	printf("(%d, %d)", P.x, P.y);
	fclose(f);
}
