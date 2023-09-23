#include <stdio.h>

int main (){
	int N;
	scanf("%d", &N); getchar();
	int a[N];
	for (int i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	int ctr = 0;
	for (int i=0; i<N; i++){
		if (a[i] == 1){
			printf("not easy\n");
			break;
		}
		else{
			ctr++;
		}
	}
	if (ctr == N){
		printf("easy\n");
	}
	return(0);
}
