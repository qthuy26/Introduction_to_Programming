#include <stdio.h>
#include <math.h>
int isPower2(int n){
	int a = 1, k = 0;
	while(a < n){
		a *= 2;
		k++;
	}
	if(pow(2, k) == n)
		return 1;
	return 0;
}

int main(){
if (isPower2(16))
  printf("YES");
else  printf("NO");

}
