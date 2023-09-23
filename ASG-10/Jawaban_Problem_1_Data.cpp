#include <stdio.h>
#include <string.h>

typedef struct string{
    char name[100];
    int number;
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
			scanf("%[^#]#%d", a[i].name, &a[i].number); getchar();
		}
		printf("Case #%d:\n", i);
		for (int i=0; i<N-1; i++){
			int min = i;
			for (int j=i+1; j<N; j++){
				if (a[i].number > a[j].number || a[i].number == a[j].number && strcmp(a[i].name, a[j].name) > 0){
					sort(&a[i], &a[j]);
				}
			}
		}
		for (int i=0; i<N; i++){
			printf("%s - %d\n", a[i].name, a[i].number);
		}
	}
	return(0);
}
