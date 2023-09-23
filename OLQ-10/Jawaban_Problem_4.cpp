#include <stdio.h>
#include <string.h>

typedef struct asg {
    char S[100];
    int T;
} a;

void sort (asg *a, asg *b){
    asg temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
	int N;
	scanf("%d", &N);
	
	asg a[N];
	for (int i=0; i<N; i++){
		scanf("%s %d", a[i].S, &a[i].T);
	}
	for (int i=0; i<N-1; i++){
		for (int j=i+1; j<N; j++){
			if (a[i].T > a[j].T || a[i].T == a[j].T && strcmp(a[i].S, a[j].S) > 0){
				sort(&a[i], &a[j]);
			}
		}
	}
	for (int i=0; i<N; i++){
		printf("%s\n", a[i].S);
	}
	return(0);
}
