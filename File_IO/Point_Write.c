#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int x, y;
}Point;

int main(){
	Point P;
	int i;
	FILE *f = fopen("points.bin", "wb");
	if(!f){
		printf("Error");
		return 1;
	}
	srand(time(0));
	for(i = 0; i < 100; i++){
		P.x = rand()%100;
		P.y = rand()%100;
		fwrite(&P, sizeof(Point), 1, f);
		printf("%d = (%d, %d)\n", i, P.x, P.y);
	}
	fclose(f);
}
