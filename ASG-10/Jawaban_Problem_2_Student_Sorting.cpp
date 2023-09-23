#include <stdio.h>
#include <string.h>

typedef struct data{
	char M[100];
	char R[15];
} a;

int main (){
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
	int N;
	fscanf(fp, "%d\n", &N);
	data a[N];
	for (int i=0; i<N; i++){
		fscanf(fp, "%[^ ] %[^\n]\n", a[i].R, a[i].M);
	}
	for (int i=0; i<N; i++){
		for (int j=i+1; j<N; j++){
			if (strcmp(a[i].R, a[j].R) > 0){
				char temp[100]; 
				strcpy(temp, a[i].R);
				strcpy(a[i].R, a[j].R);
				strcpy(a[j].R, temp);
				char str[100];
				strcpy(str, a[i].M);
				strcpy(a[i].M, a[j].M);
				strcpy(a[j].M, str);
			}
		}
	}
	for (int i=0; i<N; i++){
		printf("%s %s\n", a[i].R, a[i].M);
	}
	fclose(fp);
	return(0);
}
