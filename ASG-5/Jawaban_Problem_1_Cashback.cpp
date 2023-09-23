#include <stdio.h>

int main (){
	int X,A,B;
	scanf("%d", &X);
	for (int i=1; i<=X; i++){
		scanf("%d %d", &A, &B);
		printf("Case #%d: ", i);
		if (A>=B) {
			printf("Go-Jo\n");
		}
		else{
			printf("Bi-Pay\n");
		} 
	}
		
	return(0);	
}
