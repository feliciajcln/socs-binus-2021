#include <stdio.h>
#include <math.h>

int main (){
	int T, N;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		int sum = 0;
		for (int j=1; j<=sqrt(N); j++){
			if (N % j == 0){
				if (N / j == j){
					sum+=1;
				}
				else{
					sum+=2;
				}
			}
		}
		printf("Case #%d: %d\n", i, sum);
	}
	return(0);
}
