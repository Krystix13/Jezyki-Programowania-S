#include <stdio.h>

int main(){
	int h;
	int licznik = 0;
	printf("Podaj wysokosc: ");
	scanf("%d", &h);
	for(int i = 1; i<=h; i++){
		licznik = i;
		for(int j = 1; j<=i; j++){
			printf("%d%s", licznik , " ");
			licznik += i;
		}
		printf("\n");
	}
}
