#include <stdio.h>
#include <string.h>
struct Data{
	char nama[50];
	char bunga[50];
};

int main (){
	int a, b;
	FILE *fp = fopen("problem1.txt", "r");
	fscanf(fp, "%d\n", &a);
	Data datas[a];
	for (int i = 0; i < a; i++) {
		fscanf(fp, "%[^#]#%[^\n]\n", datas[i].nama, datas[i].bunga);
	}
	
	fscanf(fp, "%d\n", &b);
	char name[b][50];
	for (int j = 0; j < b; j++) {
		fscanf(fp, "%[^\n]\n", name[j]);
	}
	
	int ctr;
	for (int i = 0; i < b; i++) {
		ctr = 0;
		for (int j = 0; j < a; j++) {
			if (strcmp(name[i], datas[j].nama) == 0) {
				printf("Case #%d: %s\n", i+1, datas[j].bunga);
			} else {
				ctr++;
			}
		}
		if (ctr == a) {
			printf("Case #%d: N/A\n", i+1);
		}
	}
	fclose(fp);
	return 0;
}
