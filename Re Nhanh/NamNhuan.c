#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n % 4 == 0){
		if(n % 100 == 0){
			if(n % 400 == 0){
				printf("%d la nam nhuan.", n);
			}
			else{
				printf("%d la nam thuong.", n);
			}
		}
		else{
			printf("%d la nam nhuan.", n);
		}
	}
	else{
		printf("%d la nam thuong.", n);
	}
}
