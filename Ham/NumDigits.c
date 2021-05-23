#include <stdio.h>
#include <math.h>

int NumDigits(int n){
    if(n < 0)
        n = abs(n);
    if(n < 10)
        return 1;
    return 1 + NumDigits(n/10);
}

int main(){
	printf("%d\n", NumDigits(123));
}
