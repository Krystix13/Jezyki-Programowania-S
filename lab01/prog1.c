#include <stdio.h>

int main(){
	int n;
	int sum=0;
	printf("Podaj liczbe calkowita: ");
	scanf("%d", &n);
	if(n<0) n = n * (-1);
	for(int i=1; i<=n; i++){
		sum += i;
	} 
	printf("%s%d%s%d\n" , "Suma od 1 do " , n , " jest rowna " , sum);
}
