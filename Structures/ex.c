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
	nhapSV(&a); // G?i hàm nh?p 1 sinh viên 
	inSV(a); // Hi?n th? thông tin sinh viên lên màn hình 
	return 0; 
} 

