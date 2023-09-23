#include <stdio.h>
#include <string.h>

typedef struct data{
	char name[100];
	int value;
} a;

void sorting (data *x, data *y){
	data temp = *x;
	*x = *y;
	*y = temp;
}
int main (){
	int T, N;
	scanf("%d", &T); getchar();
	for (int i=0; i<T; i++){
		scanf("%d", &N); getchar();
		data a[N];
		for (int i=0; i<N; i++){
			scanf("%[^#]#%d", a[i].name, &a[i].value); getchar();
		}
		char search[100];
		scanf("%s", search); getchar();
		printf("Case #%d: ", i+1);
		for (int i=0; i<N-1; i++){
			for (int j=0; j<N-i-1; j++){
				if (a[j].value < a[j+1].value || a[j].value == a[j+1].value && strcmp(a[j].name, a[j+1].name) > 0){
					sorting(&a[j], &a[j+1]);
				}
			}
		}
		for (int i=0; i<=N; i++){
			if (strcmp(a[i].name, search) == 0){
				printf("%d\n", i+1);
			}
		}
	}
	return(0);
}
