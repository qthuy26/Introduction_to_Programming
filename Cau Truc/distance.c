#include <stdio.h>
#include <math.h>

struct Point {
	double X, Y;
};

double distance(struct Point a, struct Point b){
	return sqrt(pow(a.X-b.X, 2) + pow(a.Y-b.Y, 2));
}

int main(){
	struct Point A={1,10}; 
	struct Point B={3,4};  
	printf("%.4f",distance(A,B));
}
