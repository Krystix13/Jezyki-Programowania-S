#include <stdio.h>

int main(){
	
	int n,buf;
	int licznik = 0;
	int sum = 0;
	int suml= 0;
	int ilosc = 0;
	printf("Podaj ile liczb z suma cyfr 10 ma zsumowac: \n");
	scanf("%d", &n);
	
	for(int i = 1; i<100000000; i++){
		buf = i;
		while(buf>0){
			buf = buf/10;
			ilosc++;
		}
		buf = i;
		for(int j = 0; j<ilosc; j++){
			sum += buf%10;
			buf = buf/10;
			if(sum==2 || sum==3){
				suml +=i;
				continue;
			}
			if(sum<2){
				continue;
			}
			else{
				for(int k=2;k*k<=i;k++){
					if(i%k==0){
					//liczba nie jest pierwsza
					break;
					}
					suml += i;
					licznik++;	
				}
			}
			if(licznik == n){
				printf("%s%d%s%d\n", "Suma " , n ," pierwszych liczb z suma cyfr 10 wynosi: " , suml);
				return 0;
			}
		}
		ilosc = 0;
		sum = 0;
	}
}
