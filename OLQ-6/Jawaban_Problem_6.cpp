#include <stdio.h>
#include <string.h>

int main (){
	int T;
	scanf("%d", &T);
	char S[501];
	for (int i=1; i<=T; i++){
		scanf("%s", S);
		printf("Case #%d: ", i);
		int x=strlen(S)-1-i;
		while(i < x){
			if (S[i++]!=S[x--]){
				printf("Yay, it's a palindrome\n");
				return(0);
			}
			printf("Nah, it's not a palindrome\n");
		}
	}
	return(0);
}
