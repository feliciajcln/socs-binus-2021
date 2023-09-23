#include <stdio.h>

int main (){
	int N;
	scanf("%d", &N);
	long long int a[N];
	for (int i=0; i<N; i++){
		scanf("%lld", &a[i]);
	}
	long long int X=0;
	for (int i=0; i<N; i++){
		if(a[i] >= 0){
			X+=a[i];	
		}
	}
	printf("%lld\n", X);
	return(0);
}
