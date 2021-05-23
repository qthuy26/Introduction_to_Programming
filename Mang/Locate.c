#include <stdio.h>

int locate(int x, int A[], int n){
	int found = 0, i = 0;
	while(i < n && !found){
		if(x == A[i]){
			found = 1;
			return i;
		}
		else
			i++;
	}
    return n;
}

int main(){
	int A[]={1,2,3,4,3};
int i;
int n = sizeof(A)/sizeof(int);
for(i=0;i<=n-1;i++)
    printf("%d ",A[i]);
printf("\n%d",locate(3,A,n));
	return 0;
}
