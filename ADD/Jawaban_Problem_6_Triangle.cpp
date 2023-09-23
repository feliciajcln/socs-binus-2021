#include <stdio.h>

int main (){
	int T,x;
	scanf("%d", &T);
	int index=1;
	while(T--){
		scanf("%d", &x);
		printf("Case #%d:\n", index);
		for (int i=1; i<=x; i++){
			for (int j=1; j<=x; j++){
				if (j<=x-i){
					printf(" ");
				}
				else{
					if ((i+j) % 2 == 0){
						printf("*");
					}
					else{
						printf("#");
					}
				}
			}
			printf("\n");
		}
		index++;
	}
}
