#include <stdio.h>

int main (){
	int T;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		int N;
		scanf("%d", &N);
		long long int a[N];
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
		}
		int P,Q;
		scanf("%d %d", &P, &Q);
		if (a[P-1] > a[Q-1]){
			printf("Case #%d : Bibi\n", i);
		}
		else if (a[P-1] < a[Q-1]){
			printf("Case #%d : Lili\n", i);
		}
		else{
			printf("Case #%d : Draw\n", i);
		}
	}
	return(0);
}
