#include <stdio.h>

char fibonacci (int n, char x, char y){
	if (n == 0){
		printf("%c", x);
	}
	else if (n == 1){
		printf("%c", y);
	}
	else if (n >= 1){
		fibonacci(n-1, x, y);
		fibonacci(n-2, x, y);
	}	
}
int main (){
	int T;
	scanf("%d", &T);
	
	int n;
	char x, y;
	for (int i=1; i<=T; i++){
		scanf("%d %c %c", &n, &x, &y);
		printf("Case #%d: ", i);
		fibonacci(n, x, y);
		printf("\n");
	}
	return(0);
}
