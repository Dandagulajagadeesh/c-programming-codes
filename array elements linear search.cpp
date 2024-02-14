//write a c program on linear search:
#include <stdio.h>
int main (){
	int n, i, search;
	printf("enter array size :");
	scanf("%d", &n);
	
	int a[n];
	printf("enter array values :");
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		
	}
	printf("enter which element you want to search :");
	scanf("%d",&search);
	for(i=0; i< n; i++)
	{
		if (search ==a[i])
		{
			printf("element found at %d",i);
			break;
		}
	}
	if (i == n)
	printf("element not found");
	return 0;
}

