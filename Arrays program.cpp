//arrays program;
#include <stdio.h>
#define SIZE 11
int main (){
 int i;
 int n[SIZE];
 int total=0;
 printf("enter %d numbers:",SIZE);
 for(i=0; i < SIZE; i++)
 {
 	scanf("%d", &n[i]);
 }
 for(i=0; i < SIZE; i++)
 {
 	total = total+n[i];
 }
 printf("total score = %d",total);
 return 0;
 }
