#include <stdio.h>

int lt_th(float lt, float th1, float th2, float th3, float th4){
	float tong = lt + th1 + th2 + th3 + th4;
	if(tong >= 4.0)
		return 1;
	else
		return 0;
}

int main(){
	float lt, th1, th2, th3, th4;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	int diem = lt_th(lt, th1, th2, th3, th4);
	if(diem == 1)
		printf("DAT");
	else
		printf("KHONG DAT");
}
