#include <stdio.h>

int main(){
	int r1, r2, r3;
	scanf("%d%d%d", &r1, &r2, &r3);
	float r23 = (float)(r2*r3)/(r3+r2);
	float rtd = r1 + r23;
	printf("%.2f", rtd);
}
