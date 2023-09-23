#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int T,N; 
	scanf("%d", &T);
    int index = 1;
    while(T--){
        scanf("%d", &N);
        long long int a[N];
        for (int i=0; i<N; i++){
            scanf("%lld", &a[i]);
        }
        for(int i=0; i<N; i++){
            for(int j=i+1; j<N; j++){
                if(a[i]>a[j]){
                    int x = a[i];
                    a[i] = a[j];
                    a[j] = x;

                }
            }
        }
        long long int c=1, min=a[0], d=1; 
        for (int i=1; i<N; i++) { 
            if (a[i]==a[i-1]) 
                d++; 
            else { 
                if (d>c) { 
                    c=d; 
                    min=a[i-1]; 
                } 
                d=1; 
            } 
        } 
        if (d>c){ 
            c=d; 
            min=a[N-1]; 
        }
        printf("Case #%d: %lld\n", index, c);
        printf("%lld\n", min);
        index++;
    }
}
