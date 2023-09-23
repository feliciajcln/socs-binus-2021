#include <stdio.h>

int N, cabang[200];

void sum (int indeks, int count){
	if (indeks > N-((N+1)/2) && indeks <= N){
		printf("%d\n", count);
		return;
	}
	if (indeks * 2 <= N){
		sum(indeks*2, count+cabang[indeks*2]);
	}
	if (indeks * 2 + 1 <= N){
		sum(indeks*2+1, count+cabang[indeks*2+1]);
	}
}
int main (){
	int T;
	scanf("%d", &T);
	
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		for (int i=1; i<=N; i++){
			scanf("%d", &cabang[i]);
		}
		printf("Case #%d:\n", i);
		sum(1, cabang[1]);
	}
	return(0);
}

