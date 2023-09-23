#include <stdio.h>
#include <string.h>

int main (){
	int N;
	scanf("%d", &N);
	char S[1001];
	for (int i=1; i<=N; i++){
		scanf("%s", &S); getchar();
		printf("Case #%d : ", i);
		for(int i=strlen(S)-1; i>=0; i--){
            if(i==0){
                printf("%c\n", S[i]);
            }
            else{
                printf("%c", S[i]);
            }
		}
	}
	return(0);
}
