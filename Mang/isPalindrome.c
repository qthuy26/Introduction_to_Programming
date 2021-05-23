#include <stdio.h>

int isPalindrome(int A[], int n){
	int i;
	for(i = 0; i < n/2; i++){
		if(A[i] != A[n-i-1])
			return 0;
	}
	return 1;
}

int main(){
	int A[]={-1,1,0, 1,-1};
int n = sizeof(A)/sizeof(int);
if (isPalindrome(A,n))
    printf("YES");
else
    printf("NO");
}
