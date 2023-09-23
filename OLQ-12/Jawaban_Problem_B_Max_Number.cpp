#include <stdio.h>

int main (){
	int N, M;
	scanf("%d %d\n", &N, &M);
	
	int num[N], del[M];
	for (int i=0; i<N; i++){
		scanf("%d", &num[i]);
	}
	for (int i=0; i<M; i++){
		scanf("%d", &del[i]);
	}
	for (int i=0; i<M; i++){
		for (int j=0; j<N; j++){
			if (del[i] == num[j]){
				num[j] = 0;
			}
		}
	}
	int temp;
	for (int i=0; i<N-1; i++){
		for (int j=0; j<N-i-1; j++){
			if (num[j] < num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	if (num[0] != 0){
		printf("Maximum number is %d\n", num[0]);
	}
	else{
		printf("Maximum number is -1\n");
	}
	return(0);
}
