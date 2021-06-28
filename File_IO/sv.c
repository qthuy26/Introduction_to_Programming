#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct {
	char *HoTen;
	float Toan, Ly, Hoa;
} SinhVien;

void InSV(SinhVien sv){
	printf("%5.2f|%5.2f  |%5.2f   |%s\n", sv.Toan, sv.Ly, sv.Hoa, sv.HoTen);
}

int main(){
	FILE *f;
	char filename[50];
	fgets(filename, 50, stdin);
	if(filename[strlen(filename)-1] == '\n')
		filename[strlen(filename)-1] = '\0';
	f = fopen(filename, "r");
	int n;
	fscanf(f, "%d", &n);
	SinhVien sv[n];
	int i;
	for(i = 0; i < n; i++){
		fscanf(f, "\n");
		char name[50];
		fgets(name, 50, f);
		if(name[strlen(name)-1] == '\n')
			name[strlen(name)-1] = '\0';
		sv[i].HoTen = (char*)malloc(strlen(name));
		strcpy(sv[i].HoTen, name);
		fscanf(f, "%f%f%f", &sv[i].Toan, &sv[i].Ly, &sv[i].Hoa);
	}
	printf("Toan |Vat ly |Hoa hoc |Ho va  ten\n");
	for(i = n-1; i >= 0; i--)
		InSV(sv[i]);
	printf("Tong so: %d", n);
	fclose(f);
	return 0;
}
