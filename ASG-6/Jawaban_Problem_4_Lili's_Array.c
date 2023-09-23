#include <stdio.h>

int main (){
	int T,N,x,i,j;
	long long int a[10000], b[10000];
	scanf("%d", &T);
	for (i=1; i<=T; i++){
		scanf("%d", &N);
		scanf("%lld", &a[N]);
		for (i=1; i<=N; i++){
			x=1;
			if (a[N]!=-1){
				for (j=i+1; j<N; j++){
					if (a[N]==a[j]){
						x++;
						a[j]=-1;
					}
					else{
						b[N]=x;
					}
					printf("Case #%d: %d", T, x);
				}
			}
		}		
	}

	return(0);
}
