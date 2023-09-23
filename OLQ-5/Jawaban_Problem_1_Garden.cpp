#include <stdio.h>

int main (){
	int X,Y,T;
	scanf("%d %d", &X, &Y);
	long long int A[X][Y];
	for (int i=0; i<X; i++){
		for (int j=0; j<Y; j++){
			scanf("%lld", &A[i][j]);
		}
	}
	scanf("%d", &T);
    while(T--){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        A[a-1][b-1]=c;
    }
    for (int i=0; i<X; i++){
        for (int j=0; j<Y; j++){
            if (j == Y-1){
            	printf("%lld", A[i][j]);
            }
            else{
            	printf("%lld ", A[i][j]);
            }
        }
    printf("\n");
    }
	return(0);
}
