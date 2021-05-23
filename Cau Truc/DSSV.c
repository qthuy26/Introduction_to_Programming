#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char *HoTen;
	float LT, TH;
	char *DiemChu;
} SinhVien;

SinhVien nhapSV(){
	SinhVien sv;
	char h[50];
	scanf("\n");
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

void nhapDS(SinhVien **pL, int n){
	*pL = (SinhVien*)malloc(n*sizeof(SinhVien));
	int i;
	for(i = 0; i < n; i++){
		(*pL)[i] = nhapSV();
	}
}

void inSV(SinhVien a){
	printf("%s %.3f %.3f %s\n",a.HoTen, a.LT, a.TH, a.DiemChu); 
}

void inDS(SinhVien *L, int n){
	int i;
	for(i = 0; i < n; i++)
		inSV(L[i]);
}


int main(){ 
	int n; 
	SinhVien *list; 
	scanf("%d", &n);
	nhapDS(&list, n);
	inDS(list, n); 
	free(list);  
} 

