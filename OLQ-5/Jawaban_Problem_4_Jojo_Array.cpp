#include <stdio.h>

int main (){
	int T,N;
	scanf("%d", &T);
	int index=1;
	while(T--){
		scanf("%d", &N);
		long long int a[N], x=0, y=0;
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
			x+=a[i];
		}
		for (int j=0; j<N; j++){
			if (x<a[j]){
				y++;
			}
		}
		printf("Case #%d: %lld\n", index, x);
		printf("%lld\n", y);
		index++;
	}
}
