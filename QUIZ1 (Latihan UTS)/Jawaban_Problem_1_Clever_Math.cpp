#include <stdio.h>
#include <math.h>

int main (){
	int T;
	scanf("%d", &T);
	for (int i=1; i<=T; i++){
		int A,B;
		scanf("%d %d", &A, &B);
		printf("Case #%d: ", i);
		long long int mod1, mod2, total, result=0, x=0;
		while ((A != 0) || (B != 0)){
			mod1=A%10;
			mod2=B%10;
			total=mod1+mod2;
			A=A/10;
			B=B/10;
			if (total < 10){
				result += total*pow(10, x);
			}
			else{
				result += total%10*pow(10, x);
			}
			x++;
		}
		printf("%lld\n", result);
		
	}
	return(0);
}
