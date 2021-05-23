#include <stdio.h>
#include <string.h>

typedef struct {
	char *HoTen;
	float LT, TH;
	char *DiemChu;
} SinhVien;

int main(){
	SinhVien sv; 
	char h[50]; 
	fgets(h,50,stdin); 
	if (h[strlen(h)-1]='\n') 
	 h[strlen(h)-1]='\0'; 
	sv.HoTen = strdup(h); 
	scanf("%f%f",&sv.LT,&sv.TH); 
	printf("%s %.3f %.3f\n",sv.HoTen,sv.LT,sv.TH); 

}
