#include <stdio.h>

int fibonacci (int n, int *sum){
	if (n == 0 || n == 1){
		*sum += 1;
	}
	else{
		*sum += 1;
		fibonacci(n-1, sum) + fibonacci(n-2, sum);
	}
}

int main (){
	int T, n;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		int sum=0;
		scanf("%d", &n);
		fibonacci(n, &sum);
		printf("Case #%d: %d\n", i, sum);
	}
	return(0);
}
