#include <stdio.h>

int is_leap_year(int n){
	if(n % 4 == 0){
		if(n % 100 == 0){
			if(n % 400 == 0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(is_leap_year)
		printf("%d is a leap year.", n);
	else
		printf("%d is not a leap year.", n);
}
