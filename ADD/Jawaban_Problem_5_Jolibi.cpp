#include <stdio.h>

int main (){
	int N;
	scanf("%d", &N);
	int Jojo, Lili, Bibi;
	scanf("%d %d %d", &Jojo, &Lili, &Bibi);
	int pass=0, sum=0;
	for (int i=1; i<=N; i++){
		int a;
		scanf("%d", &a);
		sum=sum+a;
	}
	pass=(sum+Jojo+Lili+Bibi)/(N+3);
	if (Jojo>=pass) printf("Jojo lolos\n");
	if (Jojo<pass) printf("Jojo tidak lolos\n");
	if (Lili>=pass)	printf("Lili lolos\n");
	if (Lili<pass) printf("Lili tidak lolos\n");
	if (Bibi>=pass) printf("Bibi lolos\n");
	if (Bibi<pass) printf("Bibi tidak lolos\n");
	return(0);
}
