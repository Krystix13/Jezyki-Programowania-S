#include <stdio.h>
#include <math.h>

int pierwsza(int a){
	int k;
	k=sqrt(a);
	for(int i = 2; i<=k; i++){
		if(a%i==0)
		return 0;
	}
	if(a==1 || a==0)
		return 0;
	return 1;
}

int suma(int a){
	int wynik = 0;
	for(;a!=0 ;){
		wynik += a%10;
		a /= 10;
	}
	return wynik;
}

int main(){
	int n;
	int s = 0;
	int licznik = 0;
	
	printf("Ile liczb z pierwsza suma cyfr ma zsumowac: \n");
	scanf("%d" , &n);
	
	for(int i = 0; licznik < n; i++){
		if(pierwsza(suma(i))){
			licznik++;
			s += i;
		}
	}
	
	printf("%s%d\n", "Suma liczb: " , s);
}
