#include <stdio.h>
#include <string.h>

typedef struct data{
	char R[25];
	char M[100];
} a;

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int N;
	fscanf(fp, "%d\n", &N);
	data a[N];
	for (int i=0; i<N; i++){
		fscanf(fp, "%[^ ] %[^\n]\n", a[i].R, a[i].M);
	}
	for (int i=0; i<N-1; i++){
		for (int j=0; j<N-i-1; j++){
			if (strcmp(a[j].R, a[j+1].R) > 0){
				char temp1[100];
				strcpy(temp1, a[j].R);
				strcpy(a[j].R, a[j+1].R);
				strcpy(a[j+1].R, temp1);
				char temp2[100];
				strcpy(temp2, a[j].M);
				strcpy(a[j].M, a[j+1].M);
				strcpy(a[j+1].M, temp2);
			}
		}
	}
	for (int i=0; i<N; i++){
		printf("%s %s\n", a[i].R, a[i].M);
	}
	fclose(fp);
	return(0);
}
