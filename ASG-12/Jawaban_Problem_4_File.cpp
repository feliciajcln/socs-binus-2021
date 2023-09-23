#include <stdio.h>
#include <string.h>

typedef struct data{
	char pendek[100];
	char panjang[100];
} kata;

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int T, TC;
	fscanf(fp, "%d\n", &T);
	data kata[T];
	for (int i=0; i<T; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", kata[i].pendek, kata[i].panjang);
	}
	fscanf(fp, "%d\n", &TC);
	char str[101];
	for (int i=0; i<TC; i++){
		fscanf(fp, "%[^\n]\n", str);
		printf("Case #%d:\n", i+1);
		int check = -1;
		char * temp = strtok(str, " ");
		while (temp != NULL){
			int valid = 0;
			for (int j=0; j<T; j++){
				if (strcmp(kata[j].pendek, temp) == 0){
					valid = -1;
					if (check){
						printf("%s", kata[j].panjang);	
						check = 0;
					}
					else{
						printf(" %s", kata[j].panjang);
					}
					break;
				}
			}
			if (valid != -1){
				if (check){
					printf("%s", temp);
					check = 0;
				}
				else{
					printf(" %s", temp);
				}
			}
			temp = strtok(NULL, " ");
		}
		puts("");
	}
	fclose(fp);
	return(0);
}
