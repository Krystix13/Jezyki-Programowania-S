#include <stdio.h>

int main(){
	for(int i = 0; i<7; i++){
		if(i == 3) {printf("* * * * * * *\n");}
		else printf("      *\n");
		
	}
	
	printf("\n\n\n\n\n");
	
	for(int j = 0; j<7; j++){
		if(j == 3) {printf("* * * * * *\n");}
		else printf("     *\n");
		
	}
}
