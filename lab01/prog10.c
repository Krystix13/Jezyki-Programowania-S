#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Podaj ile liczb nieparzystych zsumowac: \n");
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		sum += i*2+1;
	}
	printf("%s%d%s%d\n" , "Suma " , n , " liczb naturalnych wynosi " , sum);
}
