#include <stdio.h>

struct PhanSo{
	int TuSo, MauSo;
};

int UCLN(int a, int b){
	if(b < 0)
		b = abs(b);
	int r;
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void chuanhoa(struct PhanSo *pa){
	int u = UCLN(pa->TuSo, pa->MauSo);
	pa->TuSo = pa->TuSo/u;
	pa->MauSo = pa->MauSo/u;
}

void inPhanSo(struct PhanSo a){
	printf("%d/%d\n",a.TuSo, a.MauSo);
}

int main(){
	struct PhanSo a = {10, 15};
	inPhanSo(a); 
	chuanhoa(&a); 
	inPhanSo(a);
}
