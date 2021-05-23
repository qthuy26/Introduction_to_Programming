#include <math.h>
#include <stdio.h>

int isSquareNumber(int n){
    double r = sqrt(n);
    if(pow(r, 2) == n)
        return 1;
    return 0;
}

int main(){
	if (isSquareNumber(490))
    	printf("YES");
	else printf("NO");
}
