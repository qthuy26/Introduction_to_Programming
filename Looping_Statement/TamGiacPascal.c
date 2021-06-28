#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j, c = 1;
    for(i = 0; i <= n; i++){
        for(j = 0; j <= i; j++){
            if(j == 0 || j == i)
                c = 1;
            else
                c = c*(i-j+1)/j;
            printf("%d ", c);
        }
        printf("\n");
    }
}