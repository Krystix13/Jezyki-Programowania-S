#include <stdio.h>
#include <math.h>

int main(){
	int h,licznik;
	printf("Podaj wysokosc: ");
	scanf("%d", &h); 

	for(int i = 1; i<=h; i++){
		licznik = pow(2,i);
		for(int j = 0; j<i; j++){
			printf("%d%s", licznik, " ");
			licznik += 1;
		} 
		printf("\n");
		
	}
}
