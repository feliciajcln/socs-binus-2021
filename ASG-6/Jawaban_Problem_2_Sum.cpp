#include <stdio.h>

int main (){
	long long int T,X;
	scanf("%lld", &T);
	for (int i=1; i<=T; i++){
		scanf("%lld", &X);
		long long int a[X], b[X] = {0};
		for (int x=0; x<X; x++){
			for (int y=0; y<X; y++){
				scanf("%lld", &a[y]);
			}
			for (int y=0; y<X; y++){
				b[y]+=a[y];
			}
		}
		printf("Case #%d: ", i);
		for (int y=0; y<X; y++){
			if (y==X-1){
				printf("%lld\n", b[y]);
			}
			else{
				printf("%lld ", b[y]);
			}
		}
	}
	return(0);
}
