#include <stdio.h>
#include <string.h>

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int T, K;
	fscanf(fp, "%d\n", &T);
	char S[1001];
	for (int i=0; i<T; i++){
		fscanf(fp, "%d\n%[^\n]\n", &K, S);
		for (int i=0; i<strlen(S); i++){
			if (S[i] == '0'){
				S[i] = 'O';
			}
			else if (S[i] == '1'){
				S[i] = 'I';
			}
			else if (S[i] == '3'){
				S[i] = 'E';
			}
			else if (S[i] == '4'){
				S[i] = 'A';
			}
			else if (S[i] == '5'){
				S[i] = 'S';
			}
			else if (S[i] == '6'){
				S[i] = 'G';
			}
			else if (S[i] == '7'){
				S[i] = 'T';
			}
			else if (S[i] == '8'){
				S[i] = 'B';
			}
		}
		for (int i=0; i<K; i++){
			for (int j=0; j<strlen(S); j++){
				if (S[j] == 'A'){
					S[j] = 'Z';
				}
				else if (S[j] == ' '){
					S[j] = ' ';
				}
				else{
					S[j] = S[j] - 1;
				}
			}
		}
		printf("Case #%d: %s\n", i+1, S);
	}
	fclose(fp);
	return(0);
}
