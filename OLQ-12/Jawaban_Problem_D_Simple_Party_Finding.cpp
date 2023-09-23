#include <stdio.h>

int main (){
	int K, N;
	scanf("%d", &K); getchar();
	for (int i=0; i<K; i++){
		scanf("%d", &N); getchar();
		int mmr[1000], search;
		for (int i=0; i<N; i++){
			scanf("%d", &mmr[i]); 
		}
		scanf("%d", &search); getchar();
		printf("CASE #%d: ", i+1);
		int temp;
		for (int i=0; i<N-1; i++){
			for (int j=0; j<N-i-1; j++){
				if (mmr[j] > mmr[j+1]){
					temp = mmr[j];
					mmr[j] = mmr[j+1];
					mmr[j+1] = temp;
				}
			}
		}
		int ctr = 0;
		for (int i=0; i<N; i++){
			if (mmr[i] == search){
				if (i+1 == N){
					printf("%d %d\n", mmr[i-1], search);
				}
				else{
					printf("%d %d\n", search, mmr[i+1]);
				}
			}
			else{
				ctr++;
			}
		}
		if (ctr == N){
			printf("-1 -1\n");
		}
	}
	return(0);
}
