#include <stdio.h>
int main (){
	//int number = 50;
	float sal = 10000;
	float *ptr;
	ptr=&sal;
	
	
	//int *p;
   	//p = &number;
	printf("Adress of Ptr variable is %x\n",ptr);
	printf("value of ptr is %d\n",sal);
;}
