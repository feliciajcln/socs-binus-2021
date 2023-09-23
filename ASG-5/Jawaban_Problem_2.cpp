#include <stdio.h>

int main (){
	long long int T,N;
	scanf("%lld", &T);
	for (int i=1; i<=T; i++){
		scanf("%lld", &N);
		long long int arr[N], Y=0;
		for (int x=0; x<N; x++){
			scanf("%lld", &arr[N]);
			Y+=arr[N];
		}
		printf("Case #%d: ", i);
		printf("%lld\n", Y);
	}
	return(0);
}
