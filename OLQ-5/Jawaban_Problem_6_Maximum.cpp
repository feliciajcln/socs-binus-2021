#include <stdio.h>

int main (){
	int T,N;
	scanf("%d", &T);
	int index=1;
	while(T--){
		scanf("%d", &N);
		long long int a[N];
		long long int firstmax=-1000000;
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
			if (a[i]>firstmax){
				firstmax=a[i];
			}
		}
		long long count=0;
        for (int i=0; i<N; i++){
            if (a[i] == firstmax){
				count++;
        	}
        }
        long long int secondmax = -1000000;
        for (int i=0; i<N; i++){
            if (a[i] > secondmax && a[i] != firstmax){
            	secondmax=a[i];	
			}
        }
        if (count>1){
            printf("Case #%d: %lld\n", index, firstmax + firstmax);
        }
        else{
            printf("Case #%d: %lld\n", index, firstmax + secondmax);
        }
        index++;
    }
}
