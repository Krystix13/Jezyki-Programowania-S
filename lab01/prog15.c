#include <stdio.h>

int main(){
	int l,buf;
	int ilosc = 0; 
	int sum = 10;
	printf("Podaj liczbe: ");
	scanf("%d" , &l);
	while(sum>9){
		buf = l;
		while(buf>0){
			buf = buf/10;
			ilosc++;
		}
		sum = 0;
		for(int i = 0; i<ilosc; i++){
			buf = l%10;
			l /= 10;
			sum += buf;
			
		}
		printf("%s%d\n", "Suma cyfr liczby wynosi: " , sum);
		l = sum;
	}
	return 0;
}
