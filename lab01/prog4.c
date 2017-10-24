#include <stdio.h>

int main(){
	int h;
	int licznik = 0;
	printf("Podaj wysokosc: ");
	scanf("%d", &h); 

	for(int i = 0; i<h; i++){
		licznik = i*3;
		for(int j = 0; j<i+1; j++){
			printf("%d%s", licznik, " ");
			licznik += 3;
		}
		printf("\n");
	}
}
