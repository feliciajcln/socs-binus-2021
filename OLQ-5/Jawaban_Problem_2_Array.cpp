#include <stdio.h>

int main (){
    int N;
	scanf("%d", &N);
	long long int a[N], b[N];
    for (int i=0; i<N; i++){
        scanf("%lld", &a[i]);
    }
    for(int j=0; j<N; j++){
    	int x=a[i];
        scanf("%lld", &b[x]);
    }
    for(int k=0; k<N; k++){
        if(k == N-1){
        	printf("%d\n", b[k]);    
        }
        else{
        	printf("%d ", b[k]);
        }
    }
    return(0);
}
