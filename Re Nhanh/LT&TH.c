#include <stdio.h>

int main(){
	float lt, th1, th2, th3, th4;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	float tb = (lt + th1 + th2 + th3 + th4)/5;
	if(tb >= 9.0){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: A");
	}
	else if(tb >= 8.0 && tb < 9.0){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: B+");
	}
	else if(tb >= 7.0 && tb < 8.0){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: B");
	}
	else if(tb >= 6.0 && tb < 7.0){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: C+");
	}
	else if(tb >= 5.0 && tb < 6.0){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: C");
	}
	else if(tb >= 4.5 && tb < 5.0){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: D+");
	}
	else if(tb >= 4.0 && tb < 4.5){
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: D");
	}
	else{
		printf("Diem so: %.1f\n", tb);
		printf("Diem chu: F");
	}
}
