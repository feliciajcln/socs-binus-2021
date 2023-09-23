#include <stdio.h>

int main (){
	int N,Q,M,O;
	scanf("%d", &N);
	long long int a[N];
	for (int i=1; i<=N; i++){
		scanf("%lld", &a[i]);
	}
	scanf("%d", &Q);
	int index=1;
	while(Q--){
		scanf("%d %d", &M, &O);
		int x=0;
		for (int i=M; i<=O; i++){
			x=x+a[i];
		}
		printf("Case #%d: %d\n", index, x);
		index++;
	}
}

