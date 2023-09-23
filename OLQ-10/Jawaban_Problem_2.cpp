#include <stdio.h>
#include <string.h>

typedef struct plant {
    char M[100];
    int R;
} a;

int main (){
	FILE *fp;
	fp = fopen("problemB.txt", "r"); //fp = fopen("testdata.in", "r");
	int N;
	fscanf(fp, "%d", &N);
	plant a[N];
	for (int i=0; i<N; i++){
		fscanf(fp, "%d#%[^\n]", &a[i].R, a[i].M);
	}
	for (int i=0; i<N-1; i++){
		for (int j=i+1; j<N; j++){
			if (strcmp(a[i].M, a[j].M) > 0){
				char temp[1000];
				strcpy(temp, a[i].M);
				strcpy(a[i].M, a[j].M);
				strcpy(a[j].M, temp);
				int angka = a[i].R;
				a[i].R = a[j].R;
				a[j].R = angka;
				
			}
		}
	}
	for (int i=0; i<N; i++){
		printf("%d %s\n", a[i].R, a[i].M);
	}
	fclose(fp);
	return(0);
}
