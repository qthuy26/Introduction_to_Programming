#include <stdio.h>

struct PhanSo{
	int TuSo, MauSo;
};

int main(){
	struct PhanSo a;
	scanf("%d%d",&a.TuSo,&a.MauSo);
	printf("(%d/%d)",a.TuSo, a.MauSo);
}
