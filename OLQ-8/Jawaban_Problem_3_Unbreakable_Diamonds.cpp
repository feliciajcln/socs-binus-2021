#include <stdio.h>
#include <string.h>

int main (){
	int T;
	scanf("%d", &T);
	char S[100001];
	for (int i=1; i<=T; i++){
		scanf("%s", S);
		printf("Case #%d: ", i);
		int angka[128]; memset(angka, 0, sizeof(angka));
		int jumlah=0;
		for (int j=0; j<strlen(S); j++){
			if (angka[S[j]-97] == 0){
				angka[S[j]-97]++;
				jumlah++;
			}
		}
		if (jumlah % 2 == 0){
			printf("Breakable\n");
		}
		else{
			printf("Unbreakable\n");
		}
	}
	return(0);
}
