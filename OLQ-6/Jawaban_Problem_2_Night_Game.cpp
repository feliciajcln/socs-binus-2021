#include <stdio.h>

int main (){
	int T,N;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		long long int a[N];
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
		}
		printf("Case #%d: ", i);
		for(int i=N-1; i>=0; i--){
	           if(i==0){
	               printf("%lld\n", a[i]);
	           }
	           else{
	               printf("%lld ", a[i]);
	           }
		}
	}
	return(0);
}
