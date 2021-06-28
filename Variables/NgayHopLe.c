#include <stdio.h>

int main(){
	int d, m, y;
	scanf("%d%d", &d, &m, &y);
	if(y >= 1){
		if(m >= 1 && m <= 12){
			int n;
			if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
				n = 31;
			}		 
			else if(m == 2){
				int nn = 0;
				if(y % 4 == 0){
					if(y % 100 == 0){
						if(y % 400 == 0){
							nn = 1;
						}
						else{
							nn = 0;
						}	
					}
					else{
						nn = 1;
					}
				}
				else{
					nn = 0;
				}
		
				if(nn){
					n = 29;
				}
				else{
					n = 28;
				}
			}
			else{
				n = 30;
			}
			if(d >= 1 && d <= n){
				printf("YES");
			}
		}
		else{
			printf("NO");
		}
	}
	else{
		printf("NO");
	}
}
