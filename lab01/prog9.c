#include <stdio.h>

int main(){ 
	int n;
	printf("Podaj liczbe: ");
	scanf("%d", &n);
	if(n%2==0){
		for(int i = 0; i<7; i++){
			if(i == 3) {printf("* * * * * * *\n");}
			else printf("      *\n");
			
		}
	}
	else{
		for(int j = 0; j<7; j++){
			if(j == 3) {printf("* * * * * *\n");}
			else printf("     *\n");
			
		}
	}
}
