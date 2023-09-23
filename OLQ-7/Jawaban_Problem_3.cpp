#include <stdio.h>
#include <string.h>

int main (){
	int T;
	scanf("%d", &T); getchar();
	for (int i=1; i<=T; i++){
		char S[1001];
		scanf("%s", S); getchar();
		printf("Case %d: ", i);
		for (int i=strlen(S)-1; i>=0; i--){
			printf("%d", S[i]%2);
		}
		printf("\n");
	}
	return(0);
}
