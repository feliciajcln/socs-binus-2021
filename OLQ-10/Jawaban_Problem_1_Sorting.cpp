#include <stdio.h>
#include <string.h>

typedef struct string{
    char nama[100];
    int angka;
    
} a;

void sort (string *a, string *b){
    string temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
	int T;
	scanf("%d", &T);
	
	int N;
	for (int i=1; i<=T; i++){
		scanf("%d", &N); getchar();
		string a[N];
		for (int i=0; i<N; i++){
			scanf("%[^#]#%d", a[i].nama, &a[i].angka); getchar();
		}
		printf("Case #%d:\n", i);
		for (int i=0; i<N-1; i++){
			int min = i;
			for (int j=i+1; j<N; j++){
				if (a[i].angka < a[j].angka || a[i].angka == a[j].angka && strcmp(a[i].nama, a[j].nama) > 0){
					sort(&a[i], &a[j]);
				}
			}
		}
		for (int i=0; i<N; i++){
			printf("%s - %d\n", a[i].nama, a[i].angka);
		}
	}
	return(0);
}
