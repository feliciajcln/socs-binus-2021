#include <stdio.h>

long long int sum (long long int angka){
	return (angka * (angka + 1) * (2 * angka + 1)) / 6;
}

long long int binary (long long int min, long long int max, long long int angka){
	long long int temp = 0;
	while (min <= max){
		long long int mid = min + (max - min) / 2;
		if (sum(mid) >= angka){
			temp = mid;
			max = mid - 1;
		}
		else{
			min = mid + 1;
		}	
	}
	return temp;
}

int main (){
	long long int T, M;
	scanf("%lld", &T); getchar();
	for (long long int i=0; i<T; i++){
		scanf("%lld", &M); getchar();
		printf("Case #%d: %d\n", i+1, binary(0, 1700000, M));
	}
	return(0);
}
