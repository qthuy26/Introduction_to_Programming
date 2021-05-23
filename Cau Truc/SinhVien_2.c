#include <stdio.h>
#include <string.h>
typedef struct {
	char *HoTen;
	float LT, TH;
	char *DiemChu;
} SinhVien;

SinhVien nhapSV(){
	SinhVien sv;
	char h[50];
	fgets(h, 50, stdin);
	if (h[strlen(h)-1]='\n') 
		h[strlen(h)-1]='\0'; 
	sv.HoTen = strdup(h); 
	scanf("%f%f",&sv.LT,&sv.TH);
	
	float DiemTong = sv.LT + sv.TH;
	if(DiemTong >= 9.0)
		sv.DiemChu = "A";
	else if(DiemTong > 8.0)
		sv.DiemChu = "B+";
	else if(DiemTong > 7.0)
		sv.DiemChu = "B";
	else if(DiemTong > 6.0)
		sv.DiemChu = "C+";
	else if(DiemTong > 5.0)
		sv.DiemChu = "C";
	else if(DiemTong > 4.5)
		sv.DiemChu = "D+";
	else if(DiemTong > 4.0)
		sv.DiemChu = "D";
	else
		sv.DiemChu = "F";
	return sv;
}

void inSV(SinhVien a){
	printf("%s %.3f %.3f %s\n",a.HoTen,a.LT,a.TH, a.DiemChu); 
}


int main(){ 
	SinhVien a; 
	a = nhapSV(); // G?i hàm nh?p 1 sinh viên 
	inSV(a); // Hi?n th? thông tin sinh viên lên màn hình 
	return 0; 
} 

