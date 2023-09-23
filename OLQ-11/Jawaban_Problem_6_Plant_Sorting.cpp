#include <stdio.h>
#include <string.h>

typedef struct plant{
	int R;
	char M[100];
} a;

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int N;
	fscanf(fp, "%d\n", &N);
	
	plant a[N];
	for (int i=0; i<N; i++){
		fscanf(fp, "%d#%[^\n]\n", &a[i].R, a[i].M);
	}
	for (int i=0; i<N-1; i++){
		for (int j=0; j<N-i-1; j++){
			if (strcmp(a[j].M, a[j+1].M) > 0){
				char temp1[100];
				strcpy(temp1, a[j].M);
				strcpy(a[j].M, a[j+1].M);
				strcpy(a[j+1].M, temp1);
				int temp2 = a[j].R;
				a[j].R = a[j+1].R;
				a[j+1].R = temp2;
			}
		}
	}
	for (int i=0; i<N; i++){
		printf("%d %s\n", a[i].R, a[i].M);
	}
	fclose(fp);
	return(0);
}
