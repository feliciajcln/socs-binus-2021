#include <stdio.h>
#include <string.h>

int angka[1000001];
int main (){
	int T, N;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%d", &N);
		memset(angka, 0, sizeof(angka));
		int M[N], jumlah=0; 
		for (int x=0; x<N; x++){
			scanf("%d", &M[x]);
			angka[M[x]]++;
		}
		for (int x=0; x<1000001; x++){
			if (angka[x] > 0){
				jumlah++;
			}
		}
		printf("Case #%d: %d\n", i, jumlah);
	}
	return(0);
}
