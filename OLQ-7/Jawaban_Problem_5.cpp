#include <stdio.h>
#include <math.h>

int main (){
	int T;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		int N;
		scanf("%d", &N);
		int jumlah=0;
		for (int j=1; j<=sqrt(N); j++){
			if (N % j == 0){
				if (N / j == j){
					jumlah+=1;
				}
				else{
					jumlah+=2;
				}
			}
		}
		printf("Case #%d: %d\n", i, jumlah);
	}
	return(0);
}
