#include <stdio.h>
#include <string.h>

int main (){
	int T,N;
	scanf("%d", &T);
	int index=1;
	while(T--){
		scanf("%d", &N);
		long long int a[N];
		long long int angkalist[200001]; memset(angkalist, 0, sizeof(angkalist));
		long long int angkaoutput[200001]; memset(angkaoutput, 0, sizeof(angkaoutput));
		for (int i=0; i<N; i++){
			scanf("%lld", &a[i]);
			angkalist[a[i]]++;
		}
		int max = 0;
        for(int i = 0; i < 200001; i++){
            if(angkalist[i] > max){
                max = angkalist[i];
            }
        }
        int count = 0;
        for(int i = 0; i < 200001; i++){
            if(angkalist[i] == max){
                angkaoutput[count] = i;
                count++;
            }
        }
        printf("Case #%d: %d\n", index, max);
        index++;
        for(int i = 0; i < count-1; i++){
            printf("%lld ", angkaoutput[i]);
        }
        printf("%lld\n", angkaoutput[count-1]);
	}
}
