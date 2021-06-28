#include <stdio.h>

void lt_th(float lt, float th1, float th2, float th3, float th4, float *tb){
	*tb = (lt + th1 + th2 + th3 + th4)/5;
	if(*tb >= 9.0){
		printf("A");
	}
	else if(*tb >= 8.0){
		printf("B+");
	}
	else if(*tb >= 7.0){
		printf("B");
	}
	else if(*tb >= 6.0){
		printf("C+");
	}
	else if(*tb >= 5.0){
		printf("C");
	}
	else if(*tb >= 4.5){
		printf("D+");
	}
	else if(tb >= 4.0){
		printf("D");
	}
	else{
		printf("F");
	}
}
int main(){
	float lt, th1, th2, th3, th4, tb;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	lt_th(lt, th1, th2, th3, th4, &tb);
	printf("Diem so: %.1f\n", tb);
	printf("Diem chu: ");
}
