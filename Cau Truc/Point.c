#include <stdio.h>

struct Point {
	double x, y;
};

int main(){
	struct Point a;
	scanf("%lf%lf", &a.x, &a.y);
	printf("(%.3lf %.3lf)", a.x, a.y);	
}

