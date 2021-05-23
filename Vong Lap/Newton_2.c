#include <stdio.h>
#include <math.h>
int main(){
    int a, n;
    double epsilon;
    scanf("%d%d%lf", &a, &n, &epsilon);
    
	double x = (double)a/n;
    double xk = (double)fabs(((n-1)*pow(x,n)+a) / (n*pow(x, n-1)));
    
    while(fabs(a - pow(xk, n)) >= epsilon){
        x = xk;
        xk = (double)fabs(((n-1)*pow(x,n)+a) / (n*pow(x, n-1)));
    }
    printf("%.8lf ", xk);  
}
