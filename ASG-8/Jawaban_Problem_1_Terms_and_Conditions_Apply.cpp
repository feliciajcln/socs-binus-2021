#include <stdio.h>

int main (){
	int T;
	scanf("%d", &T);
	long int A,B,C,x;
	for (int i=1; i<=T; i++){
		scanf("%ld %ld %ld", &A, &B, &C);
		x = A/100.0*B;
		printf("Case #%d: ", i);
		if (x <= C){
			printf("%ld\n", x);
		}
		else{
			printf("%ld\n", C);
		}
	}
	return(0);
}
