#include <stdio.h>

int main (){
	int N,K;
	scanf("%d %d", &N, &K);
	for (int i=1; i<=N; i++){
		for (int x=1; x<=N; x++){
			printf("#");	
		}
		printf("\n");
	}
	printf("\n");
	for (int i=1; i<=N; i++){
		for (int x=1; x<=N; x++){
			if (i%K == 0){
				printf("#");
			}	
			else{
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
	for (int i=1; i<=N; i++){
		for (int x=1; x<=N; x++){
			if (x%K == 0){
				printf("#");
			}	
			else{
				printf(".");
			}	
		}
		printf("\n");
	}
	return(0);
}
