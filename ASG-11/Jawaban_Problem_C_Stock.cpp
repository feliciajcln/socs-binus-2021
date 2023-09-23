#include <stdio.h>
#include <string.h>

struct stock{
	char name[100];
	int quantity;	
};

int search(char target[], int jml, stock product[]) {
    int hasil = -1;
    for (int i=0; i<jml; i++){
        if (strcmp(target, product[i].name) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main (){
	FILE *fp = fopen("testdata.in", "r");
	
	int T, N;
	fscanf(fp, "%d\n", &T);
	for (int i=0; i<T; i++){
		fscanf(fp, "%d\n", &N);
		stock temp, product[N];
		char type[100];
		int sum = 0;
		for (int i=0; i<N; i++){
			fscanf(fp, "%[^#]#%[^#]#%d\n", type, temp.name, &temp.quantity);
			int index = search(temp.name, sum, product);
			if (index == -1){
				strcpy(product[sum].name, temp.name);
				if (strcmp(type, "sell") == 0){
					product[sum].quantity = - temp.quantity;
				}
				else if (strcmp(type, "buy") == 0){
					product[sum].quantity = temp.quantity;
				}
				sum++;
			}
			else if (index != -1){
				if (strcmp(type, "sell") == 0){
					product[index].quantity -= temp.quantity;
				}
				else if (strcmp(type, "buy") == 0){
					product[index].quantity += temp.quantity;
				}
			}
		}
		printf("Case #%d:\n", i+1);
		int valid = 0;
		for (int j=0; j<sum; j++){
			if (product[j].quantity < 0){
				printf("stock is not enough for product %s\n", product[j].name);
                valid = 1;
			}
		}
		if (!valid){
            for (int j=0; j<sum; j++){
                printf("%s - %d\n", product[j].name, product[j].quantity);
            }
        }
	}
	fclose(fp);
	return(0);
}
