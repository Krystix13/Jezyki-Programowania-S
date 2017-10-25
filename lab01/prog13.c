#include <stdio.h>

int main(){
	int l,buf;
	int ilosc = 0;
	printf("Podaj liczbe: ");
	scanf("%d" , &l);
	buf = l;
	while(buf>0){
		buf = buf/10;
		ilosc++;
	}
	for(int i = 0; i<ilosc; i++){
		if(l%2==0) printf("Jest parzysta\n");
		else{
			printf("Cyfra jest nieparzysta\n");
			return 0;
		}
		l = l/10;
	}
	printf("Cyfry sa parzyste.\n");
	return 0;
}
