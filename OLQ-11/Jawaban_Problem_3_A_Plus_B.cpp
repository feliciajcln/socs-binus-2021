#include <stdio.h>

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int A, B;
	fscanf(fp, "%d %d", &A, &B);
	printf("%d\n", A + B);
	
	return(0);
}
