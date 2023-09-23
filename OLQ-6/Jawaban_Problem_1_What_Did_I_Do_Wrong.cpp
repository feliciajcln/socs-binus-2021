#include <stdio.h>

int main (){
	int T,N;
	scanf("%d", &T);
	int index=1;
	while(T--){
		scanf("%d", &N);
		long long int a[N],b[N];
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
		}
		for (int i=0; i<N; i++){
			scanf("%lld", &b[i]);
		}
		printf("Case #%d: ", index);
		for (int i=0; i<N; i++){
			if (i==N-1){
				printf("%lld\n", a[i]-b[i]);
			}
			else{
				printf("%lld ", a[i]-b[i]);
			}
		}
		index++;
	}
}
 
