#include <stdio.h>

int main (){
    int N;
	scanf("%d", &N);
    int input[N];
    int output[N];
    for(int k = 0; k < N; k++){
        scanf("%d", &input[k]);
    }
    for(int i = 0; i < N; i++){
        scanf("%d", &output[input[i]]);
    }
    for(int j = 0; j < N; j++){
        if(j == N-1){
        	printf("%d\n", output[j]);    
        }
        else{
        	printf("%d ", output[j]);
        }
    }
}
