#include <stdio.h>
#include <string.h>
typedef struct {
	char *HoTen;
	float LT, TH;
	char *DiemChu;
} SinhVien;

void nhapSV(struct SinhVien *a){
	char h[50];
	fgets(h, 50, stdin);
	if (h[strlen(h)-1]='\n') 
		h[strlen(h)-1]='\0'; 
	strcpy(a->HoTen, h);
	scanf("%f%f",&a->LT,&a->TH);
	
}

void inSV(SinhVien a){
	printf("%s %.3f %.3f %s\n",a.HoTen,a.LT,a.TH, a.DiemChu); 
}


int main(){ 
	SinhVien a; 
	nhapSV(&a); // G?i h�m nh?p 1 sinh vi�n 
	inSV(a); // Hi?n th? th�ng tin sinh vi�n l�n m�n h�nh 
	return 0; 
} 

