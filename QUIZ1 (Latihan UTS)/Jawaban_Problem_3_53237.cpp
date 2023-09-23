#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
	char S[10001];
	scanf("%[^\n]", S); getchar();
	for (int i=0; i<strlen(S); i++){
		S[i]=toupper(S[i]);
		if (S[i]=='I'){
			S[i]='1';
		}
		else if (S[i]=='R'){
			S[i]='2';
		}
		else if (S[i]=='E'){
			S[i]='3';
		}
		else if (S[i]=='A'){
			S[i]='4';
		}
		else if (S[i]=='S'){
			S[i]='5';
		}
		else if (S[i]=='G'){
			S[i]='6';
		}
		else if (S[i]=='T'){
			S[i]='7';
		}
		else if (S[i]=='B'){
			S[i]='8';
		}
		else if (S[i]=='P'){
			S[i]='9';
		}
		else if (S[i]=='O'){
			S[i]='0';
		}
	}
	printf("%s\n", S);
	return(0);
}
