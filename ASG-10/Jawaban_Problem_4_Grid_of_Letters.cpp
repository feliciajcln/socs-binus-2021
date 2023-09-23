#include <stdio.h>
#include <string.h>

int main (){
	int R, C;
	scanf("%d %d", &R, &C); getchar();
	int max=0;
	char arr[R][C+5];
	for (int i=0; i<R; i++){
		scanf("%s", arr[i]); getchar();		
	}
	for (int i=0; i<R; i++){
		for (int j=0; j<C; j++){
			for (int k=0; k<C-j-1; k++){
				if (arr[i][k] > arr[i][k+1]){
					char temp = arr[i][k+1];
					arr[i][k+1] = arr[i][k];
					arr[i][k] = temp;
				}
			}
		}	
	}
	for (int i=0; i<R; i++){
		for (int j=0; j<R-i-1; j++){
			if (strcmp(arr[j], arr[j+1]) < 0){
				char temp[250];
				strcpy(temp, arr[j+1]);
				strcpy(arr[j+1], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
	for (int i=0; i<R; i++){
		printf("%s\n", arr[i]);
	}
	return(0);
}
