#include <stdio.h>
#include <math.h>
struct Point {
	double X, Y;
};

struct Rect{
	struct Point TR;
	struct Point BL;
};

int isIn(struct Point M, struct Rect r){
	double a = ((M.X - r.TR.X)/(r.BL.X - r.TR.X));
	double b = ((M.Y - r.TR.Y)/(r.BL.Y - r.TR.Y));
	if(a >= 0 && a <= 1 && b >= 0 && b <= 1)
		return 1;
	return 0;
}

int main(){
	struct Rect r = {{10,2},{2,8}};

	struct Point M={10.01,6};
	if (isIn(M,r))
	    printf("YES");
	else printf("NO");
}
