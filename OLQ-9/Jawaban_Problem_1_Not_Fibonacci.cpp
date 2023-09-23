#include <stdio.h>

int fibonacci (int K, int x, int y){
	if (K == 0){
		return x;
	}
	else if (K == 1){
		return y;
	}
	else if (K > 1){
		return fibonacci(K-1, x, y) + fibonacci(K-2, x, y);
	}
}

int main (){
	int x, y, K;
	scanf("%d %d %d", &x, &y, &K);
	printf("%d\n", fibonacci(K, x, y));
	return(0);
}
