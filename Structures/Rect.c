#include <stdio.h>
#include <math.h>
struct Point {
	double X, Y;
};

struct Rect{
	struct Point LF;
	struct Point UR;
};

double distance(struct Point a, struct Point b){
	double d;
	d = sqrt(pow(a.X-b.X, 2) + pow(a.Y-b.Y, 2));
	return d;
}

double area(struct Rect a){
	struct Point temp;
	temp.X = a.LF.X;
	temp.Y = a.UR.Y;
	double cd = distance(a.UR, temp);
	double cr = distance(a.LF, temp);	
	return cd*cr;
}

int main(){
	struct Rect r = {{10,2},{2,8}};
	printf("%.5lf",area(r)); 
}
