#include <stdio.h>
#include <string.h>

int main (){
	int T;
	char S[1001];
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		scanf("%s", S);
		printf("Case %d: ", i);
		for (int i=0; i<strlen(S); i++){
			if (i==strlen(S)-1){
				printf("%d\n", S[i]);
			}		
			else{
				printf("%d-", S[i]);
			}
		}
	}
	return(0);
}
