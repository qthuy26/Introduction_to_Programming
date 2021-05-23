#include <stdio.h>
#include <string.h>
#define MAX_M 100
#define MAX_N 100
typedef struct {
	int m, n;
	int A[MAX_M][MAX_N];
	int r, c;
} State;

void init_state(State *S, char *s){
	freopen(s, "r", stdin);
	scanf("%d%d", &S->m, &S->n);
	int i, j;
	for(i = 0; i < S->m; i++)
		for(j = 0; j < S->n; j++)
			scanf("%d", &S->A[i][j]);
	scanf("%d%d", &S->r, &S->c);
}

void print_state(State S){
	int i, j;
	for(i = 0; i < S.m; i++){
		for(j = 0; j < S.n; j++){
			if(i == S.r && j == S.c)
				printf(".. ");
			else
				printf("%3d ", S.A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int up(State S, State *N){
	if(S.r == 0)
		return 0;
	else{
		*N = S;
		int t;
		t = N->A[N->r][N->c];
		N->A[N->r][N->c] = N->A[N->r-1][N->c];
		N->A[N->r-1][N->c] = t;
		N->r--;
		return 1;	
	}
}

int down(State S, State *N){
	if(S.r == S.m-1)
		return 0;
	else{
		*N = S;
		int t;
		t = N->A[N->r][N->c];
		N->A[N->r][N->c] = N->A[N->r+1][N->c];
		N->A[N->r+1][N->c] = t;
		N->r++;
		return 1;	
	}
}

int left(State S, State *N){
	if(S.c == 0)
		return 0;
	else{
		*N = S;
		int t;
		t = N->A[N->r][N->c];
		N->A[N->r][N->c] = N->A[N->r][N->c-1];
		N->A[N->r][N->c-1] = t;
		N->c--;
		return 1;	
	}
}

int right(State S, State *N){
	if(S.c == S.n-1)
		return 0;
	else{
		*N = S;
		int t;
		t = N->A[N->r][N->c];
		N->A[N->r][N->c] = N->A[N->r][N->c+1];
		N->A[N->r][N->c+1] = t;
		N->c++;
		return 1;	
	}
}

int is_finished(State S){
	int flag = 1;
	int i, j;
	for(i = 0; i < S.m; i++)
		for(j = 0; j < S.n; j++)
			if(S.A[i][j] != i*S.n+j+1)
				flag = 0;
	return flag;
}


int main(){
	State S, N;
	init_state(&S, "puzzle1.txt");
	while(!is_finished(S)){
		print_state(S);
		printf("Nhap lenh di chuyen: UP, DOWN, LEFT, RIGHT, EXIT\n");
		char cmd[10];
		scanf("\n");
		fgets(cmd, 10, stdin);
		int len = strlen(cmd);
		if (cmd[len-1]=='\n'){
		    len--;
		    cmd[len]='\0';
		}
		int x;
		if(strcmp(cmd, "UP") == 0){
			x = up(S, &N);
			S = N;
		}
		else if(strcmp(cmd, "DOWN") == 0){
			x = down(S, &N);
			S = N;
		}
		else if(strcmp(cmd, "LEFT") == 0){
			x = left(S, &N);
			S = N;
		}
		else if(strcmp(cmd, "RIGHT") == 0){
			x = right(S, &N);
			S = N;
		}
		else if(strcmp(cmd, "EXIT") == 0)
			break;
		else
			printf("Unknown command, please enter: UP, DOWN, LEFT, RIGHT or EXIT\n");
		if(x)
			print_state(S);
		else
			printf("Illegal move.\n");
	}
	printf("You win!");
	return 0;
}


