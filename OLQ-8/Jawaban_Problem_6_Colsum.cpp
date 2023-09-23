#include <stdio.h>

int main (){
	long long int T, N;
	scanf("%lld", &T);
	for (int i=1; i<=T; i++){
		scanf("%lld", &N);
		long long int a[N], b[N] = {0};
		for (int i=0; i<N; i++){
			for (int j=0; j<N; j++){
				scanf("%lld", &a[j]);
			}
			for (int j=0; j<N; j++){
				b[j]+=a[j];
			}
		}
		printf("Case #%d: ", i);
		for (int j=0; j<N; j++){
			if (j == N-1){
				printf("%lld\n", b[j]);
			}
			else{
				printf("%lld ", b[j]);
			}
		}
	}
	return(0);
}
