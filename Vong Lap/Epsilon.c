#include <stdio.h>

int main(){
    int n = 0;
    double t = (double)4/(2*n+1);
    double pi = 0;
    double Epsilon;
    scanf("%lf", &Epsilon);
    while(t > Epsilon){
        if(n % 2 == 0)
            pi = pi + t;
        else
            pi = pi - t;
        n++;
        t = (double)4/(2*n+1);
    }
    printf("pi = %.8lf", pi);
}