#include <stdio.h>

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int T, N;
	fscanf(fp, "%d\n", &T);
	for (int i=0; i<T; i++) {
		int sum1=0, sum2=0;
		fscanf(fp, "%d\n", &N);
		int X[N];
		for (int j=0; j<N; j++) {
			fscanf(fp, "%d", &X[j]);
			sum1 += X[j];
		}
		printf("Case #%d: ", i+1);
		for (int j=0; j<N-1; j++) {
			if (X[j] - X[j+1] != 0) {
				int perimeter = X[j] - X[j+1];
				(perimeter < 0) ? perimeter *= -1 : perimeter;
				sum2 += perimeter*2;
			}
		}
		sum2 += ((4 * N) + (X[0] * 2) + (X[N-1] * 2));
		printf("%d %d\n", sum2, sum1*4);
	}
	fclose(fp);
	return 0;
}
