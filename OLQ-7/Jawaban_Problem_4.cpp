#include <stdio.h>

int main (){
	int N,M;
	scanf("%d %d", &N, &M);
	char a[N];
	scanf("%s", a);
	for (int i=0; i<M; i++){
		int x; 
		scanf("%d", &x);
        if (a[x] >= 'a' && a[x] <= 'z'){
        	a[x]=a[x]-32;
        }
        else if (a[x] >= 'A' && a[x] <= 'Z'){
        	a[x]=a[x]+32;
        }
	}
	printf("%s\n", a);
	return(0);
}
