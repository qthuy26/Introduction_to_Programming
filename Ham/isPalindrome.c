#include <stdio.h>

int isPalindrome(int n){
	int r, i, s = 0;
	for(i = n; n != 0; n/=10){
		r = n%10;
		s = s*10 + r;
	}
	if(i == s)
		return 1;
	return 0;
}

int main(){
	if (isPalindrome(12344321))
  printf("YES");
else  printf("NO");
}
