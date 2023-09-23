#include <stdio.h>
#include <string.h>

typedef struct kata{
	char pendek[100];
	char panjang[100];
} a;

int main (){
	FILE *fp = fopen("problemB.txt", "r");
	
	int T, TC;
	fscanf(fp, "%d\n", &T);
	kata a[T];
	for (int i=0; i<T; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", a[i].pendek, a[i].panjang);
	}
	fscanf(fp, "%d\n", &TC);
	char kalimat[101];
	for (int i=0; i<TC; i++){
		fscanf(fp, "%[^\n]\n", kalimat);
		printf("Case #%d:\n", i+1);
		int check = -1;
		char * token = strtok(kalimat, " ");
		while(token != NULL) {
			int valid = 0;
			for (int j=0; j<T; j++){
				if (strcmp(a[j].pendek, token) == 0){
					valid = -1;
					if (check){
						printf("%s", a[j].panjang);
						check = 0;
					}
					else{
						printf(" %s", a[j].panjang);
					}
					break;
				}
			}
			if (valid != -1){
				if (check){
					printf("%s", token);
					check = 0;
				}
				else{
					printf(" %s", token);
				}
			}
		    token = strtok(NULL, " ");
		}
		puts("");
	}
	fclose(fp);
	return(0);
}
