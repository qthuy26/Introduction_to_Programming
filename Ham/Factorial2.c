#include <stdio.h>

long long Factorial2(int n){
	int i;
	long long s=1;
	if(n % 2 == 0){
		for(i = 1; i <= n; i+=2)
			s *= i;
	}
	else{
		for(i = 2; i <= n; i+=2)
			s *= i;
	}
	return s;
}

int main(){
	int i;
for(i=1;i<=25;i++)
    printf("%lld\n",Factorial2(i));
}
