#include <stdio.h>

int main (){
	int T;
	scanf("%d", &T);
	
	int N;
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		long long int a[N];
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
		}
	}
	return(0);
}
