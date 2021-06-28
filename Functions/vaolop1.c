#include <stdio.h>

int vaolop1(int tuoi){
	if(tuoi >= 6)
		return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	if(vaolop1(t) == 1)
		printf("Tuoi %d: Du tuoi vao lop 1.", t);
	else
		printf("Tuoi %d: Khong du tuoi vao lop 1.", t);
}
