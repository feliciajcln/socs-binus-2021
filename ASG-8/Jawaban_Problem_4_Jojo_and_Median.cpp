#include <stdio.h>

int main (){
	long long int N, median; 
	scanf("%lld", &N); getchar();
	char ID[N][10], S[N][20];
	long long int P[N];
	for (long long int i=0; i<N; i++){
		scanf("%s", ID[i]); getchar();
		scanf("%[^\n]", S[i]); getchar();
		scanf("%lld", &P[i]); getchar();
	}
	median = N / 2;
	for (long long int i=0; i<N; i++){
		if (P[median] <= P[i]){
			printf("%s %s\n", ID[i], S[i]);
		}	
	}
	return(0);
}

