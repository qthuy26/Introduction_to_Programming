#include <stdio.h>

int main(){
	char c;
	float th1, th2, th3, th4, lt;
	scanf("%c", &c);
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	printf("%c\n", c);
	printf("Ly thuyet: %.2f\n", lt);
	printf("Thuc hanh 1: %.2f\n", th1);
	printf("Thuc hanh 2: %.2f\n", th2);
	printf("Thuc hanh 3: %.2f\n", th3);
	printf("Thuc hanh 4: %.2f\n", th4);
	float tb = (lt + (th1 + th2 + th3 + th4)/4)/2;
	printf("Trung binh: %.2f", tb);
	return 0;
}
