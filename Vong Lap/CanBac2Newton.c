#include <stdio.h>
#include <math.h>
int main(){
    int a;
    double epsilon;
    scanf("%d %lf", &a, &epsilon);
    double x = (double)(1+a)/2;
    double xn = (double)(x + a/x)/2;
    while(fabs((xn-x)/x) >= epsilon){
        x = xn;
        xn = (double)(x + a/x)/2;
    }
    printf("%.8lf", xn);
}