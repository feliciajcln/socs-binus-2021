#include <stdio.h>

int main (){
	int T=3;
	for (int i=0; i<T; i++){
		int N;
		scanf("%d", &N);
		char S[N];
		scanf("%s", S);
		printf("%c%c\n", S[N-1], S[0]);
	}
	return(0);
}
