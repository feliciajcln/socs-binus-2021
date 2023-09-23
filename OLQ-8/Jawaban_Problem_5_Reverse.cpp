#include <stdio.h>
#include <string.h>

int main (){
	int T;
	scanf("%d", &T);
	char S[1001];
	for (int i=1; i<=T; i++){
		scanf("%s", S);
		printf("Case #%d: ", i);
		for (int x=strlen(S)-1; x>=0; x--){
			if (S[x] >= 65 && S[x] <= 90){
				printf("%c", S[x] + 32);
			}
			else if (S[x] >= 97 && S[x] <= 122){
				printf("%c", S[x] - 32);
			}
		}
		printf("\n");
	}
	return(0);
}
