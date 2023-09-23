#include <stdio.h>

int main (){
	int A;
	scanf("%d", &A);
	if (A % 2 == 0) {
		printf("EVEN\n", A);
	}
	else {	
		printf("ODD\n", A);
	}
	return(0);
}
