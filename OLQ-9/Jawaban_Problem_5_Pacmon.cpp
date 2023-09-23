#include <stdio.h>
#include <string.h>

int N, M;
char map[100][100];
int jalan[100][100];
int sum = 0;

int jumlah (int x, int y){
	if (jalan[x][y] == 1 || map[x][y] == '#' || x < 0 || y < 0 || x >= N || y >= M){
		return (1);
	}
	if (map[x][y] == '*'){
		sum++;
	}
	jalan[x][y] = 1;
	jumlah(x+1, y);
	jumlah(x-1, y);
	jumlah(x, y+1);
	jumlah(x, y-1);
}

int main (){
	int T;
	scanf("%d", &T); getchar();
	memset(jalan, 0, sizeof(jalan));

	for (int i=1; i<=T; i++){
		scanf("%d %d", &N, &M); getchar(); map[N][M];
		for(int i = 0; i < N; i++){
            scanf(" %[^\n]", &map[i]);
        }
		for (int i=0; i<N; i++){
			for (int j=0; j<M; j++){
				if (map[i][j] == 'P'){
					int a = i, b = j;
					jumlah(a, b);
				}
			}
		}
		printf("Case #%d: %d\n", i, sum);
		sum = 0;
		memset(jalan, 0, sizeof(jalan));
	}
	return(0);
}
