#include <stdio.h>

int main (){
	int T,N;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		for (int x=1; x<=N; x++){
			for (int y=1; y<=N; y++){
				if ((x==1) || (x==N) || (y==1) || (y==N) || (x==y) || ((x+y) == (N+1))){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return(0);
}
