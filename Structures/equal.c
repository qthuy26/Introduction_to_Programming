#include <stdio.h>
#include <math.h>

struct Point {
	double X, Y;
};

double distance(struct Point a, struct Point b){
	return sqrt(pow(a.X-b.X, 2) + pow(a.Y-b.Y, 2));
}

int equal(struct Point a, struct Point b, double epsilon){
	return distance(a, b) < epsilon;
}

int main(){
	struct Point A={1,2}; 
	struct Point B={1,2.00000001};
	if (equal(A,B, 0.000001)) 
	printf("A = B"); 
	else printf("A != B"); 
}
