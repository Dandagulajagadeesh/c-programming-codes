#include <stdio.h>
//Bitwiser

int main (){
	
	int a=8, b=12;
	
	printf("%d",   (a&b));
	printf("\n%d", (a|b));
	printf("\n%d", (a^b));
	printf("\n%d", a,(~b));

	printf("\n%d",(a<b));
	printf("\n%d", (a>b));
	
	return 0;
	}
