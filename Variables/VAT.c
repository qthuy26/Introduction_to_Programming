#include <stdio.h>

int main(){
	int sl, dg;
	scanf("%d%d", &sl, &dg);
	int tien = sl*dg;
	int vat = tien*(10.0/100);
	printf("%d\n%d", tien, vat);
}
