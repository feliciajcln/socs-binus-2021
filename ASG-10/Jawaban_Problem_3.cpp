#include <stdio.h>
#include <string.h>

typedef struct data{
	char title[1001];
	char name[1001];
	long long int count;
};
data a[100];

void sorting (data *a, data *b){
    data temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
	FILE *fp;
	fp = fopen("problem3.txt", "r");
	
	int N=0;
	while (fscanf(fp, "%[^#]#%[^#]#%lld\n", a[N].title, a[N].name, &a[N].count) != EOF){
		N++;
	}
	for (int i=0; i<N; i++){
		fscanf(fp, "%[^#]#%[^#]#%lld\n", a[i].title, a[i].name, &a[i].count);
	}
	for (int i=0; i<N; i++){
		for (int j=i+1; j<N; j++){
			if (a[i].count < a[j].count || a[i].count == a[j].count && strcmp(a[i].title, a[j].title) > 0){
				sorting(&a[i], &a[j]);
			}
		}
	}
	for (int i=0; i<N; i++){
		printf("%s by %s - %lld\n", a[i].title, a[i].name, a[i].count);
	}
	fclose(fp);
	return(0);
}
