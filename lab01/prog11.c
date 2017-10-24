#include <stdio.h>

int main(){
	
	int n;
	int licznik = 0;
	int sum = 0;
	printf("Podaj ile liczb z koncowka 1 2 lub 7 ma zsumowac: \n");
	scanf("%d", &n);
	
	for(int i = 0; i<100000000; i++){
		if(i%10==1 || i%10==2 || i%10==7){
			sum += i;
			licznik++;
		}
		if(licznik == n) break;
	}
	
	printf("%s%d%s%d\n", "Suma " , n , " liczb z koncowka 1 2 7 wynosi: " , sum);
}
