#include <stdio.h>

int main (){
	int N, Q;
	scanf("%d", &N);
	char Code[N][10], Day[N][10]; 
	int Time[N];
	for (int i=0; i<N; i++){
		scanf("%s", Code[i]);
		scanf("%s", Day[i]);
		scanf("%d", &Time[i]);
	}
	scanf("%d", &Q);
	long long int X[Q];
	for (int i=0; i<Q; i++){
		scanf("%lld", &X[i]);
		printf("Query #%d:\n", i+1);
		printf("Code: %s\n", Code[X[i]-1]);
		printf("Day: %s\n", Day[X[i]-1]);
//		if (Time[X[i]-1] < 10){
//			printf("Time: 0%d:00\n", Time[X[i]-1]);
//		}
//		else{
//			printf("Time: %d:00\n", Time[X[i]-1]);
//		}
		printf("Time: %02d:00\n", Time[X[i]-1]); //%02d itu maksa supaya inputnya harus 2 digit, klu ga dua ntr d tambah 0
	}
	return(0);
}
