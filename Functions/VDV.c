#include <stdio.h>

float vdv_max(float a, float b, float c, int *vt_max){
	float max = a;
	*vt_max = 1;
	if(max < b){
		max = b;
		*vt_max = 2;
	}
	else if(max < c){
		max = c;
		*vt_max = 3;
	}
	return max;
}

float vdv_min(float a, float b, float c, int *vt_min){
	float min = a;
	*vt_min = 1;
	if(min > b){
		min = b;
		*vt_min = 2;
	}
	if(min > c){
		min = c;
		*vt_min = 3;
	}
}

int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	int vt_min, vt_max;
	float min = vdv_min(a, b, c, &vt_min);
	float max = vdv_max(a, b, c, &vt_max);
	printf("Thanh tich tot nhat: %.1f giay\n", min);
	printf("Thanh tich thap nhat: %.1f giay\n", max);
	printf("VDV thi dau quoc gia: %d\n", vt_min);
	printf("VDV xuong voi doi tre: %d", vt_max);
	return 0;
}
