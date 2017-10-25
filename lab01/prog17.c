#include <stdio.h>

int main(){
	int n;
	printf("Podaj liczbe do sprawdzenia: \n");
	scanf("%d" , &n);
	if(n<2){
		printf("Liczba nie jest pierwsza!\n");
		return 0;
	}
	if(n==2|| n==3){
		printf("Liczba jest pierwsza :).");
		return 0;
	}
	 for(int i=2;i*i<=n;i++){
		if(n%i==0){
			printf("Liczba nie jest pierwsza!\n");
			return 0;
		}
	printf("Liczba jest pierwsza :).\n");
	return 0;
	 }
}
