#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	if(t >= 6){
		printf("Tuoi %d: Du tuoi vao lop 1.", t);
	}
	else{
		printf("Tuoi %d: Khong du tuoi vao lop 1.", t);
	}
	return 0;
}
