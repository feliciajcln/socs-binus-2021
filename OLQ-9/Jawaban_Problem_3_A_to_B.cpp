#include <stdio.h>

int main (){
	int T;
	scanf("%d", &T);
	
	int A, B;
	for (int i=1; i<=T; i++){
		scanf("%d %d", &A, &B);
		printf("Case #%d: ", i);
		do {
			if (A == B){
				printf("YES\n");
				break;
			}
			else{
				if (A == 1){
					if (B == 1){
						printf("YES\n");
						break;
					}
					else{
						printf("NO\n");
						break;
					}
				}
				else{
					if (A % 2 == 0){
						A /= 2;
					}
					else{
						A = A * 3 + 1;	
					}
				}
			}
		} while (A != 0);
	}
	
	return(0);
}
