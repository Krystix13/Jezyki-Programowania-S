#include <stdio.h>

int main(){
	int m, sum;
	printf("Podaj rozmiar macierzy: ");
	scanf("%d", &m);
	for(int i = 1; i<=m; i++){
		for(int j = 1; j<=m; j++){
			sum = i + j;
			if(i>j) printf("%3d%s", 0, " ");
			else printf("%3d%s", sum, " ");
		}
		printf("\n");
	}
}
