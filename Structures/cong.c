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

void cong(struct PhanSo a, struct PhanSo b, struct PhanSo *pC){
	pC->MauSo = a.MauSo * b.MauSo;
	pC->TuSo = a.TuSo*b.MauSo + b.TuSo*a.MauSo;
	chuanhoa(pC);
}

void inPhanSo(struct PhanSo a){
	printf("%d/%d\n",a.TuSo, a.MauSo);
}

int main(){
	struct PhanSo a = {10,15};
	struct PhanSo b = {2,3}; 
	struct PhanSo c; 
	inPhanSo(a); 
	inPhanSo(b); 
	cong(a,b,&c); 
	inPhanSo(c);
}
