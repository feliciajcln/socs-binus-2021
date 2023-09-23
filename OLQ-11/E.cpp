#include <stdio.h>

int main () {
	int a, b;
	FILE *fp = fopen("problem5.txt", "r");
	fscanf(fp, "%d\n", &a);
	for (int i = 0; i < a; i++) {
		int keliling=0, sum=0;
		fscanf(fp, "%d\n", &b);
		int arr[b];
		for (int j = 0; j < b; j++) {
			fscanf(fp, "%d", &arr[j]);
			sum += arr[j];
		}
		
		printf("Case #%d:", i+1);
		
		for (int j = 0; j < b-1; j++) {
			if (arr[j]-arr[j+1] != 0) {
				int hitung = arr[j]-arr[j+1];
				(hitung < 0) ? hitung*=-1 : hitung;
				keliling += hitung*2;
			}
		}
		
		keliling += ((4*b)+(arr[0]*2)+(arr[b-1]*2));
		printf(" %d %d\n", keliling, sum*4);
	}
	fclose(fp);
	return 0;
}
