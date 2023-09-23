#include <stdio.h>
#include <string.h>

typedef struct data{
	char nim[100];
	char name[100];
} mhs;

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int N, T;
	fscanf(fp, "%d\n", &N);
	data mhs[N];
	for (int i=0; i<N; i++){
		fscanf(fp, "%[^ ] %[^\n]\n", mhs[i].nim, mhs[i].name);
	}
	fscanf(fp, "%d\n", &T);
	char search[100];
	for (int i=0; i<T; i++){
		fscanf(fp, "%[^\n]\n", search);
		printf("Case #%d: ", i+1);
		int ctr = 0;
		for (int i=0; i<N; i++){
			if (strcmp(mhs[i].nim, search) == 0){
				printf("%s\n", mhs[i].name);
			}
			else{
				ctr++;
			}
		}
		if (ctr == N){
			printf("N/A\n");
		}
	}
	fclose(fp);
	return(0);
}
