#include <stdio.h>

struct Point {
	double x, y;
};

struct Point readPoint(){
	struct Point a;
	scanf("%lf%lf", &a.x, &a.y);
	return a;
}

void printPoint(struct Point a){
	printf("(%.3lf, %.3lf)", a.x, a.y);	
}

int main(){
	struct Point a;
	a = readPoint();
	printPoint(a);
}

