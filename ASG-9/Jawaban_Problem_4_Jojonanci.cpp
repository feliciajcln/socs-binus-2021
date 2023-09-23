#include <stdio.h>

int fibonacci (int N, int X, int Y){
	if (N == 0){
		return X;
	}
	else if (N == 1){
		return Y;
	}
	else if (N >= 1){
		return fibonacci(N-1, X, Y) - fibonacci (N-2, X, Y);
	}
}

int main (){
	int T;
	scanf("%d", &T);
	
	int N, X, Y;
	for (int i=1; i<=T; i++){
		scanf("%d %d %d", &N, &X, &Y);
		printf("Case #%d: %d\n", i, fibonacci(N, X, Y));		
	}
	return(0);
}
