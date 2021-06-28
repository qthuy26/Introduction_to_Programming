#include <stdio.h>

int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float max = a;
	int vdv_max = 1;
	if(max < b){
		max = b;
		vdv_max = 2;
	}
	if(max < c){
		max = c;
		vdv_max = 3;
	}
	float min = a;
	int vdv_min = 1;
	if(min > b){
		min = b;
		vdv_min = 2;
	}
	if(min > c){
		min = c;
		vdv_min = 3;
	}
	printf("Thanh tich tot nhat: %.1f giay\n", min);
	printf("Thanh tich thap nhat: %.1f giay\n", max);
	printf("VDV thi dau quoc gia: %d\n", vdv_min);
	printf("VDV xuong voi doi tre: %d", vdv_max);
	return 0;
}
