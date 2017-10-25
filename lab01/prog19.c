#include <stdio.h>

int main(){
	int a,b,bufa,bufb,nwd,nww;
	printf("Podaj dwie liczby do sprawdzenia ich nww\n");
	scanf("%d%d", &a , &b);
	bufa = a;
	bufb = b;
	for(int i = 0; i<100000; i++){
		if(bufa>bufb)
			bufa = bufa - bufb;
		if(bufb>bufa)
			bufb = bufb - bufa;
		if(bufa==bufb) 
			break;
	}
	
	nwd = bufa;
	nww = (a*b)/nwd;
	
	printf("%s%d\n", "Nww wynosi: " , nww);
}
