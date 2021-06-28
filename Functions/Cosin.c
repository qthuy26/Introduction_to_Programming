#include <stdio.h>
#include <math.h>

double giaiThua(int n){
	if(n==0 || n==1)
		return 1;
	double g = 1, i;
	for(i = 1; i <= n; i++){
		g *= i;
	}
	return g;
}

double cosin(double x, double epsilon){
	int i = 1;
	double tong = 1, temp;
	do{
		temp = pow(x, 2*i)/giaiThua(2*i);
		tong = tong + pow(-1, i)*temp;
		i++;
	}while(temp >= epsilon);
	return tong;
}

int main(){
	const double pi=3.141592653;
	printf("%.10lf",cosin(pi/3,0.0000000001));
}
