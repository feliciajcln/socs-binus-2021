#include <stdio.h>

long long int binary (long long int data[], long long int min, long long int max, long long int find){
	while (min <= max){
        long long int mid = (max + min) / 2;
        if ((data[mid] == find) && (data[mid] != data[mid-1])){
            return mid;
        }
		else if ((data[mid] == find) && (data[mid] == data[mid-1])){
            max = mid;
        }
		else if (data[mid] > find){
            max = mid - 1;
        }
		else{
            min = mid + 1;
        }
    }
    return -1;
}

int main (){
	long long int N, M;
	scanf("%lld %lld", &N, &M); getchar();
	
	long long int arr1[N], arr2[M];
	for (long long int i=1; i<=N; i++){
		scanf("%lld", &arr1[i]);
	}
	for (long long int j=1; j<=M; j++){
		scanf("%lld", &arr2[j]);
	}
	for (int i=1; i<=M; i++){
		long long int index = binary(arr1, 1, N, arr2[i]);
		printf("%lld\n", index);
	}
/*	long long int ctr = 0, flag = 0;
	for (long long int i=0; i<N; i++){
		for (long long int j=0; j<M; j++){
			if (flag == 1){
				break;
			}
			else if (arr1[i] == arr2[j]){
				printf("%lld\n", i+1);
				flag = 1;
				break;
			}
			else{
				ctr++;
			}
		}
		if (ctr == N){
			printf("-1\n");
		}
	}*/
	return(0);
}
