#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    float tong = 0, max = -1, min = 100;;
    for(i = 0; i < n; i++){
        float t;
        scanf("%f", &t);
        if(t > max){
            max = t;
        }
        if(t < min){
            min = t;
        }
        tong += t;
    }
    float tb = tong / n;
    printf("%.2f %.2f %.2f", tb, max, min);
}
