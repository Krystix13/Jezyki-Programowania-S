#include <stdio.h>

int main(){
	
	int n;
	int licznik = 0;
	int sum = 0;
	printf("Podaj ile liczb z koncowka 17 31 lub 62 ma zsumowac: \n");
	scanf("%d", &n);
	
	for(int i = 0; i<100000000; i++){
		if(i%100==17 || i%100==31 || i%100==62){
			sum += i;
			licznik++;
		}
		if(licznik == n) break;
	}
	
	printf("%s%d%s%d\n", "Suma " , n , " liczb z koncowka 17 31 62 wynosi: " , sum);
}
