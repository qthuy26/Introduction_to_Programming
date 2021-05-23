#include <stdio.h>
#include <math.h>

struct Point {
	double X, Y;
};

double distance(struct Point a, struct Point b){
	return sqrt(pow(a.X-b.X, 2) + pow(a.Y-b.Y, 2));
}

int isTriangle(struct Point a, struct Point b, struct Point c){
	double ab = distance(a, b);
	double ac = distance(a, c);
	double bc = distance(b, c);
	if(ab + bc > ac && ab + ac > bc && ac + bc > ab)
		return 1;
	return 0;
}

int main(){
	struct Point A={1,2}; 
	struct Point B={1,3}; 
	struct Point C={5,3}; 
	if (isTriangle(A,B,C))
	printf("YES"); 
	else printf("NO");
}
