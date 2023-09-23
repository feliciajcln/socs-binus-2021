#include <stdio.h>
#include <string.h>

typedef struct data{
	char M[100];
	char P[100];	
} a;

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int N, T;
	fscanf(fp, "%d\n", &N);
	data a[N];
	for (int i=0; i<N; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", a[i].M, a[i].P);
	}
	fscanf(fp, "%d\n", &T);
	char S[T][100];
	for (int i=0; i<T; i++){
		fscanf(fp, "%[^\n]\n", S[i]);
	}
	for (int i=0; i<T; i++){
		int index = 0;
		for (int j=0; j<N; j++){
			if (strcmp(a[j].M, S[i]) == 0){
				printf("Case #%d: %s\n", i+1, a[j].P);
			}
			else{
				index++;
			}
		}
		if (index == N){
			printf("Case #%d: N/A\n", i+1);
		}
	}
	fclose(fp);
	return(0);
}
