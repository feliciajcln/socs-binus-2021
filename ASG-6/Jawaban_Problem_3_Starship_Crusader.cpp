#include <stdio.h>

int main (){
	int T,N,Y;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		long long int a[N], b[N],c=0;
		for (int i=1; i<=N; i++){
			scanf("%lld", &a[i]);
		}
		for (int i=1; i<=N; i++){
			scanf("%lld", &b[i]);
			if (a[i]<b[i]){
				c++;
			}
		}
		printf("Case #%d: %lld\n", i, c);
	}
	
	return(0);
}
