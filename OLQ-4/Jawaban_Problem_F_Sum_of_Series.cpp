#include <stdio.h>

int main (){
	int A,B;
	long int x=0;
	
	scanf("%d %d", &A, &B);
	for(int i=A; i<=B; i++){
		x+=i;
	}
	printf("%ld\n", x);

	return(0);	
}
