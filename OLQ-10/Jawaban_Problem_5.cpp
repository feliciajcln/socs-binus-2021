#include <stdio.h>

int main (){
	int T;
	scanf("%d", &T); getchar();
	
	int N, X;
	for (int i=1; i<=T; i++){
		scanf("%d %d", &N, &X); getchar();
		int a[N];
		for (int i=0; i<N; i++){
			scanf("%d", &a[i]);
		}
		printf("Case #%d: ", i);
		int count=0;
		for (int i=0; i<N-1; i++){
			for (int j=0; j<N-i-1; j++){
				if (a[j] > a[j+1] && a[j] != a[j+1]){
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
					count++;
				}
			}
		}
		printf("%d\n", count*X);
	}
	
	return(0);
}
