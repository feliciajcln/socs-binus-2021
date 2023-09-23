#include <stdio.h>

int main (){
	int T,N;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		long long int x[N], y[N]= {0};
		for (int i=0; i<N; i++){
			for (int j=0; j<N; j++){
				scanf("%lld", &x[j]);
			}
			for (int j=0; j<N; j++){
				y[j]+=x[j];
			}
		}
		printf("Case #%d: ", i);
		for (int j=0; j<N; j++){
			if(j==N-1){
			printf("%lld\n", y[j]);
			}
			else{
				printf("%lld ", y[j]);
			}
		}
	}
	return(0);
}
