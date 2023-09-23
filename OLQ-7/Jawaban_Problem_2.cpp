#include <stdio.h>

int main (){
	int T;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		int X,P;
		scanf("%d %d", &X, &P); getchar();
		for (int i=0; i<P; i++){
			X=X/2;
		}
		printf("%d\n", X%2);
	}
	return(0);
}
