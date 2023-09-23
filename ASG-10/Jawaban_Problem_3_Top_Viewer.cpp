#include <stdio.h>
#include <string.h>

struct data{
	char title[1001];
	char name[1001];
	long long int count;
} temp;
data a[100];

void sorting (data a[], int b){
    for (int i=0; i<b; i++){
    	for (int j=0; j<b-i-1; j++){
    		if (a[j].count < a[j+1].count){
    			temp = a[j+1];
    			a[j+1] = a[j];
    			a[j] = temp;
			}
			else if (a[j].count == a[j+1].count){
				if (strcmp(a[j].title, a[j+1].title) > 0){
					temp = a[j+1];
    				a[j+1] = a[j];
    				a[j] = temp;
				}
			}
		}
	}
}

int main (){
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
	int N=0;
	while (fscanf(fp, "%[^#]#%[^#]#%lld\n", a[N].title, a[N].name, &a[N].count) != EOF){
		N++;
	}
	sorting(a, N);
	for (int i=0; i<N; i++){
		printf("%s by %s - %lld\n", a[i].title, a[i].name, a[i].count);
	}
	fclose(fp);
	return(0);
}
