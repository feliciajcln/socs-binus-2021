#include <stdio.h>

int sum = 0, tile[8][8];

int convert (char a){
	switch (a) {
		case 'A':
			return 0;
		case 'B':
			return 1;
		case 'C':
			return 2;
		case 'D':
			return 3;
		case 'E':
			return 4;
		case 'F':
			return 5;
		case 'G':
			return 6;
		case 'H':
			return 7;
		case '1':
			return 7;
		case '2':
			return 6;
		case '3':
			return 5;
		case '4':
			return 4;
		case '5':
			return 3;
		case '6':
			return 2;
		case '7':
			return 1;
		case '8':
			return 0;	
	}
}

int minimum(int x, int y, int sum){
    if(x < 0 || x >= 8 || y < 0 || y >= 8){
        return(1);
    }
    if(sum < tile[x][y]){
        tile[x][y] = sum;
    }
    else{
    	return(1);
	}
    minimum(x+2, y+1, sum+1);
    minimum(x+2, y-1, sum+1);
    minimum(x+1, y+2, sum+1);
    minimum(x+1, y-2, sum+1);
    minimum(x-2, y+1, sum+1);
    minimum(x-2, y-1, sum+1);
    minimum(x-1, y+2, sum+1);
    minimum(x-1, y-2, sum+1);
}

int main(){
    int T; 
	scanf("%d", &T); getchar();
	
    char x1, y1, x2, y2;
    int X1, Y1, X2, Y2;
    for (int i=1; i<=T; i++){
        scanf("%c%c %c%c", &x1, &y1, &x2, &y2); getchar();
        X1 = convert(x1);
        Y1 = convert(y1);
        X2 = convert(x2);
        Y2 = convert(y2);
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                tile[i][j] = 10000;
            }
        }
        minimum(X1, Y1, sum);
        printf("Case #%d: %d\n", i, tile[X2][Y2]);
        sum = 0;
    }
}
