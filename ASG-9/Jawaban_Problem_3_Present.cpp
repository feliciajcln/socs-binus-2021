#include <stdio.h>

int main (){
	int T, N;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		long long int a[N], max=0, sum=0;
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
		}
		for (int i=0; i<N; i++){
			if (max < a[i]){
				max = a[i];
			}
		}
		for (int i=0; i<N; i++){
			if (a[i] == max){
				sum++;
			}
		}
		printf("Case #%d: %lld\n", i, sum);
	}
	return(0);
}
