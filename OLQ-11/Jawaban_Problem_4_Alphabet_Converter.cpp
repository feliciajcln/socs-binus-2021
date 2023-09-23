#include <stdio.h>

int main (){
	FILE *fp = fopen("problem4.txt", "r");
	
	int T;
	fscanf(fp, "%d", &T);
	char X[T];
	for (int i=0; i<T; i++){
		fscanf(fp, "%s", X[i]);
		printf("%s", X[i]);
	}
	
	return(0);
}
