#include <stdio.h>
int main (){
	int n;
	printf ("enter a number :");
	scanf("%d", &n);
	if (n % 2==0)
	{
		printf("it is even number",n);
	}
	else
	{
		printf("it is odd number",n);
	}
	return 0;
}
