#include <stdio.h>

int main (){
	int N,Q,M,O;
	scanf("%d", &N);
	long long int a[N];
	for (int i=1; i<=N; i++){
		scanf("%lld", &a[i]);
	}
	scanf("%d", &Q);
	for (int j=1; j<=Q; j++){
		scanf("%d %d", &M, &O);
		a[M]=O;
		printf("Case #%d:", j);
		for (int k=1; k<=N; k++){
			printf(" %lld", a[k]);
		}
		printf("\n");	
	}
	return(0);
}
